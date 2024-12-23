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

int histogram(vector<int> &a)
{
    stack<int> idx;
    vector<int> b(a.size(), -1);
    idx.push(0);
    int ans = INT_MIN;
    for (int i = 1; i < a.size(); i++)
    {
        while (!idx.empty() && (a[idx.top()] > a[i]))
        /*if want to find previous greater element
        just reverse <*/
        {
            int ele = a[idx.top()];
            int nsi = i;
            int psi = (idx.empty())?(-1):idx.top();
            ans = max(ans,ele*(nsi-psi-1));
            idx.pop();
        }
        idx.push(i);
    }
   while(not idx.empty()){
    
            int ele = a[idx.top()];
            int nsi = a.size();
            int psi = (idx.empty())?(-1):idx.top();
            ans = max(ans,ele*(nsi-psi-1));
            idx.pop();
   }
   return ans;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> a;
    array(a, n);
    int ans = histogram(a);
    print(ans);
    return 0;
}