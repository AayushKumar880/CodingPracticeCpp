#include <bits/stdc++.h>
using namespace std;

#define int long long
#define print(a) cout << a << endl;
#define loopfor(n) for (int i = 0; i < n; i++)

int32_t main()
{
    string s;
    int n;
    cin >> n;
    loopfor(n)
    {
        char c;
        cin >> c;
        s.push_back(c);
    }

    stack<char> check;
    loopfor(n)
    {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{')
        {
            check.push(s[i]);
        }
        if (not check.empty())
        {
            if (s[i] == ')' && check.top() == '(')
            {
                check.pop();
            }
            else if (s[i] == ']' && check.top() == '[')
            {
                check.pop();
            }
            else if (s[i] == '}' && check.top() == '{')
            {
                check.pop();
            }
        }
    }
    print(((check.empty()) ? "YES" : "NO"));
}