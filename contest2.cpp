// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// vector<vector<int>> a;

// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {

//         cin >> n >> m;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 int in;
//                 cin >> in;
//                 a[i].push_back(in);
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if(i==0&&j==0){
//                     if (a[i][j] > a[i + 1][j] && a[i][j] > a[i][j + 1]) a[i][j]--;
//                 }
//                 else if(i==0&&j==m-1)
//                 if (a[i][j] > a[i - 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j + 1])
//                     a[i][j]--;
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 cout << a[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int dp[501][501][501];
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int solve(int i, int j, int k, int r)
{
    if (k > r)
        return 0;
    if (dp[i][j][k] != -1)
        return dp[i][j][k];
    int ans;
    if (gcd(i, j) == 1 && gcd(j, k) == 1 && gcd(i, k) == 1)
    {
        ans = solve(i + 1, j + 1, k + 1, r) + 1;
    }
    else
    {
        ans = max(solve(i, j, k + 1, r), max(solve(i, j + 1, k, r), solve(i + 1, j, k, r)));
    }
    return dp[i][j][k] = ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        memset(dp, -1, sizeof dp);
        cout << solve(l, l + 1, l + 2, r) << endl;
    }
    return 0;
}
