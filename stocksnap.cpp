#include <bits/stdc++.h>
using namespace std;

#define int long long
#define print(a) cout << a << endl;
#define loopfor(n, i) for (int i = 0; i < n; i++)
#define array(a, n)      \
    loopfor(n, i)        \
    {                    \
        int in;          \
        cin >> in;       \
        a.push_back(in); \
    }

vector<int> pge(vector<int> &a)
{
    stack<int> idx;
    vector<int> b(a.size(), -1);
    reverse(a.begin(), a.end());
    idx.push(0);
    for (int i = 1; i < a.size(); i++)
    {
        while (!idx.empty() && (a[idx.top()] < a[i]))
        /*if want to find previous greater element
        just reverse <*/
        {
            b[idx.top()] = a.size() - i - 1; // bcoz after reverse the index will change
            idx.pop();
        }
        idx.push(i);
    }
    reverse(b.begin(), b.end());
    reverse(a.begin(), a.end());
    return b;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> a;
    array(a, n);
    vector<int> ans = pge(a);

    loopfor(n, i)
    {
        cout << (i-ans[i] )<< " ";
    }
    return 0;
}