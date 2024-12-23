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

int32_t main()
{
    vector<int> ans;
    int n,k;
    cin >> n >> k;
    vector<int> nums;
    array(nums, n);
    deque<int> slide;
    // loopfor(k, i)
    // {
    //     slide.push_back(nums[i]);
    // }
    // loopfor(n - k + 1, i)
    // {
    //     auto maxEle = max_element(slide.begin(), slide.end());
    //     ans.push_back(*maxEle);
    //     slide.pop_front();
    //     slide.push_back(nums[k + i]);
    // }
    // loopfor(ans.size(),i){
    //     print(ans[i]);
    // }
    loopfor(n-k+1,i){
        
    }
}