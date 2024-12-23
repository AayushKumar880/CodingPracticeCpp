// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int32_t main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int n, k;
//     cin >> n >> k;

//     vector<int> a;
//     for (int i = 0; i < n; ++i)
//     {
//         int in;
//         cin >> in;
//         a.push_back(in);
//     }

//     if (k <= 0)
//     {
//         sort(a.begin(), a.end(), greater<int>());
//         int cumSum = 0;
//         bool possible = true;
//         for (int i = 0; i < n; i++)
//         {
//             cumSum += a[i];
//             if (cumSum < k)
//             {
//                 cout << "No\n";
//                 possible = false;
//                 break;
//             }
//         }
//         if (possible)
//         {
//             cout << "Yes\n";
//             for (int i = 0; i < n; ++i)
//                 cout << a[i] << ' ';
//             cout << '\n';
//         }
//     }
//     else
//     {
//         sort(a.begin(), a.end());
//         cout << "Yes\n";
//         for (int i = 0; i < n; i++)
//             cout << a[i] << ' ';
//         cout << '\n';
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool customComparator(const pair<int, int>& p1, const pair<int, int>& p2) {
//     if (p1.first != p2.first) {
//         return p1.first > p2.first;
//     }
//     // If the first elements are the same, compare based on the original 'a' values
//     // We assume that the first element is a + b, so 'a' can be retrieved as (first - second)
//     int a1 = p1.second - p1.first;
//     int a2 = p2.second - p2.first;
//     return a1 > a2;
// }

// int32_t main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int t;
//     cin >>t;
//     while(t--){
//         int n;cin>>n;
//         vector<pair<int,int>> v;
//         for (size_t i = 0; i < n; i++)
//         {
//             int a,b;
//             cin>>a>>b;
//             v.push_back(make_pair(a,a+b));
//         }

//         sort(v.begin(), v.end(), customComparator);
//         int term1= (v[1].second-v[1].first)*v[0].first;
//         int term2= (v[0].second-v[0].first)*v[1].first;
//         cout << term1+term2 << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;cin>>t;
// 	while(t--){
// 	    int n,k;cin>>n>>k;
// 	    vector<int> v;
// 	    for(int i=0;i<n;i++){
// 	        int in;cin>>in;v.push_back(in);
// 	    }
// 	    int sum=0;int minS=INT_MAX;
// 	    for(int i=1;i<n;i++){
// 	        int dif=(abs(v[i]-v[i-1]));
// 	        minS=min(minS,dif);
// 	        sum+=dif;
// 	    }
// 	    if(minS==sum){
// 	        cout << sum << endl;
// 	    }else{
// 	       sum = sum + (k-minS)9;
// 	   }

// 	}

// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);

// 	int t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		int n;
// 		cin >> n;
// 		vector<int> a(n);

// 		for (int i = 0; i < n; i++)
// 		{
// 			cin >> a[i];
// 		}

// 		if (a[0] == a[n - 1])
// 		{
// 			cout << "NO\n";
// 		}
// 		else
// 		{
// 			cout << "YES\n";
// 			string result(n, 'B');

// 			// Coloring strategy
// 			// Ensure that there is at least one `R` and one `B` and the ranges are different.
// 			result[0] = 'R';
// 			bool colored = false;
// 			for (int i = 1; i < n; i++)
// 			{
// 				if (a[i] != a[0])
// 				{
// 					result[i] = 'R';
// 					colored = true;
// 					break;
// 				}
// 			}
// 			// Ensure at least one element remains blue
// 			if (!colored)
// 			{
// 				result[n - 1] = 'B';
// 			}

// 			cout << result << "\n";
// 		}
// 	}

// 	return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int n, x;
// vector<int> a;
// const int MAX = 1e5;
// int dp[101][55][55][3];
// const int MOD = 1e9 + 7;

// int solve(int i, int oc, int ec, int prev)
// {
//     if (i == n)
//         return 0;
//     if (dp[i][oc][ec][prev] != -1)
//         return dp[i][oc][ec][prev];

//     int res = INT_MAX;

//     if (a[i != 0])
//     {
//         if (prev == 2 || a[i] % 2 == prev)
//             solve(i + 1, oc--, ec, a[i] % 2);
//         else
//             res = 1 + solve(i + 1, oc, ec, a[i] % 2);
//     }
//     else
//     {
//         if (prev == 2)
//         {
//             if (oc > 0)
//                 res = min(res, solve(i + 1, oc--, ec, 1));
//             if (ec > 0)
//                 res = min(res, solve(i + 1, oc, ec--, 0));
//         }
//         else
//         {
//             if (oc > 0)
//                 res = min(res, solve(i + 1, oc--, ec, 1)) + (prev == 0);
//             if (ec > 0)
//                 res = min(res, solve(i + 1, oc, ec--, 0)) + (prev == 1);
//         }
//     }

//     return dp[i][oc][ec][prev] = res;
// }

// int main()
// {
//     memset(dp, -1, sizeof(dp));
//     cin >> n;
//     int oc = 0, ec = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int in;
//         cin >> in;
//         if (in % 2 != 0)
//         {
//             oc++;
//         }
//         else if (in != 0)
//         {
//             ec++;
//         }
//         a.push_back(in);
//     }
//     oc = (n + 1) / 2 - oc;
//     ec = (n / 2) - ec;
//     // for (int i = 0; i <= n; i++)
//     // {
//     //     for (int j = 0; j <= 100; j++)
//     //     {
//     //         dp[i][j] = -1;
//     //     }
//     // }
//     x = 0;
//     cout << solve(0, oc, ec, 2) << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int a[2][2];
// // int dp[101][101];

// // int solve(int l, int r)
// // {
// //     if (l >= r)
// //         return 0;

// //     if (dp[l][r] != -1)
// //         return dp[l][r];

// //     dp[l][r] = INT_MAX;

// //     for (int k = l; k < r; k++)
// //         dp[l][r] = min(dp[l][r], (solve(l, k) + solve(k + 1, r)) + a[l] * a[k + 1]);

// //     return dp[l][r];
// // }

// bool solve(int x,int y){
//     if(x>a[1][0]||y>a[1][1]) return false;

//     if(solve(x+1,y)==solve(x,y+1)) return true;
//     else return false;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         for (int i = 0; i < 2; i++)
//         {
//             for (int j = 0; j < 2; j++)
//             {
//                 cin >> a[i][j];
//             }
//         }
//         // memset(dp, -1, sizeof dp);
//         if(solve(a[0][0],a[0][1])) cout << "YES\n";
//         else cout<<"NO\n";
//     }
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <climits>

// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> colors(n);
//         for (int i = 0; i < n; ++i)
//         {
//             cin >> colors[i];
//         }

//         vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

//         // Base case: single mixture
//         for (int i = 0; i < n; ++i)
//         {
//             dp[i][i] = -1;
//         }

//         for (int len = 2; len <= n; ++len)
//         {
//             for (int i = 0; i <= n - len; ++i)
//             {
//                 int j = i + len - 1;
//                 for (int k = i; k < j; ++k)
//                 {
//                     int smoke = dp[i][k] + dp[k + 1][j] + colors[i] * colors[k + 1];
//                     dp[i][j] = min(dp[i][j], smoke);
//                 }
//             }
//         }

//         cout << dp[0][n - 1] << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #define int long long

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, y, k;
//         cin >> x >> y >> k;

//         while (k)
//         {
//             // Step 1: Adjust x to the next multiple of y
//             x += (y - x % y) % y;

//             // Step 2: Reduce k based on the difference to next multiple
//             k -= (y - x % y) % y;

//             // Step 3: Reduce x by repeatedly dividing by y while x is divisible by y
//             while (x % y == 0)
//             {
//                 x /= y;
//             }
//         }

//         // Step 4: Adjust x by adding (k-1) * y (since k is reduced by 1 more than needed)
//         x += (k - 1) * y;

//         cout << x << endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> a;
vector<vector<int>> dp;

int solve(int mask){
    int k = __builtin_popcount(mask);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i][k] && !(mask & (1<<i))){
            ans+=solve(mask|(1<<i));
        }
    }
}

int main(){
    
}