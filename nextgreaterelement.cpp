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

vector<int> nge(vector<int> &a)
{
    stack<int> idx;
    vector<int> b(a.size(), -1);
    idx.push(0);
    for (int i = 1; i < a.size(); i++)
    {
        while (!idx.empty() && (a[idx.top()] < a[i]))
        /*if want to find previous greater element
        just reverse <*/ 
        {
            b[idx.top()] = a[i];
            idx.pop();
        }
        idx.push(i);
    }
    return b;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> a;
    array(a, n);
    vector<int> ans = nge(a);
    loopfor(n, i)
    {
        cout << ans[i] << " ";
    }
    return 0;
}