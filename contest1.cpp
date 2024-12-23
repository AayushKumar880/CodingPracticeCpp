// Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> h;

//     for (int i = 0; i < n; i++)
//     {
//         int in;
//         cin >> in;
//         h.push_back(in);
//     }

//     vector<int> dp(n, -1);
//     dp[0] = 0;
//     dp[1] = abs(h[1] - h[0]);

//     for (int i = 2; i < n; i++)
//     {
//         dp[i] = min((dp[i - 1] + abs(h[i] - h[i - 1])), (dp[i - 2] + abs(h[i] - h[i - 2])));
//     }

//     cout << dp[n-1];
// }

// int a[100005][3];
// int dp[100005][3];

// int maxHappy(int i, int j)
// {
//     if (i == 0)
//     {
//         return a[i][j];
//     }

//     if (dp[i][j] != -1)
//     {
//         return dp[i][j];
//     }

//     int ans = 0;
//     for (int k = 0; k < 3; k++)
//     {
//         if (k != j)
//         {
//             ans = max(ans,maxHappy(i - 1, k) + a[i][j]);
//         }
//     }
//     return dp[i][j] = ans;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> a[i][j];
//         }
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             dp[i][j] = -1;
//         }
//     }

//     cout << max(max(maxHappy(n, 0), maxHappy(n, 1)), maxHappy(n, 2));
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     int a[100005];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int freq[100005] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         freq[a[i]]++;
//     }
//     int dp[100005] = {0};
//     dp[1]=freq[1];
//     for(int i=2;i<=1e5;i++){
//         dp[i]=max(dp[i-1],dp[i-2]+i*freq[i]);
//     }

//     cout << dp[100000]<<endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             int in;
//             cin >> in;
//             v.push_back(in);
//         }
//         sort(v.begin(), v.end());
//         vector<int> dp(2e5 + 1);
//         dp[v[0]] = 1;
//         for (int i = 1; i < n; i++)
//         {
//             dp[v[i]]++;
//             if (v[i] != 1)
//                 dp[v[i]] = max(dp[v[i]], dp[1] + 1);
//             for (int j = 2; j * j < v[i]; i++)
//             {
//                 if (v[i] % j == 0)
//                     dp[v[i]] = max(dp[v[i]], dp[j] + 1);
//                 dp[v[i]] = max(dp[v[i]], dp[v[i] / j] + 1);
//             }
//         }

//         int ans = 0;
//         for (int i = 0; i <= 2e5 + 1; i++)
//         {
//             ans = max(ans, dp[i]);
//         }
//         cout << ans << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// vector<int> a;
// const int MAX = 1e5;
// int dp[MAX + 1][101];
// const int MOD = 1e9 + 7;

// int solve(int i, int prev)
// {

//     if (i == n)
//         return 1;

//     if (dp[i][prev] != -1)
//         return dp[i][prev];

//     int ans = 0;
//     if (a[i] != 0)
//     {
//         if (prev == 0 || abs(prev - a[i]) <= 1)
//             ans = (ans + solve(i + 1, a[i])) % MOD;
//     }
//     else
//     {
//         if (prev == 0){
//             for (int j = 1; j <= m; j++)
//                 ans = (ans + solve(i + 1, j)) % MOD;
//         }else{
//             for (int j = max(1, prev - 1); j <= min(m, prev + 1); j++)
//                 ans = (ans + solve(i + 1, j)) % MOD;
//         }
//     }

//     return dp[i][prev] = ans;
// }

// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         int in;
//         cin >> in;
//         a.push_back(in);
//     }
//     for (int i = 0; i <= MAX; i++)
//     {
//         for (int j = 0; j < 101; j++)
//         {
//             dp[i][j] = -1;
//         }
//     }
//     cout << solve(0, 0);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int n, x;
// vector<int> a;
// const int MAX = 1e6;
// int dp[MAX + 1][501];
// const int MOD = 1e9 + 7;

// int solve(int sum, int i)
// {
//     if (sum < 0)
//         return 0;
//     if (i == 0)
//         return sum == 0;

//     if (dp[sum][i] != -1)
//         return dp[sum][i];

//     return dp[sum][i] = (solve(sum - a[i], i - 1) + solve(sum, i - 1)) % MOD;
// }

// int main()
// {
//     cin >> n >> x;
//     for (int i = 0; i < n; i++)
//     {
//         int in;
//         cin >> in;
//         a.push_back(in);
//     }
//     for (int i = 0; i <= MAX; i++)
//     {
//         for (int j = 0; j <= 100; j++)
//         {
//             dp[i][j] = -1;
//         }
//     }
//     cout << solve(x, n) << endl;
// }

// #include <bits/stdc++.h>
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
//         while (k > 0)
//         {
//             if (k < y)
//             {
//                 x += k;
//                 k = 0;
//             }
//             else
//             {
//                 x = x + (y - x % y) % y;
//                 k = k - (y - x % y) % y;
//                 while (x % y == 0)
//                 {
//                     x /= y;
//                 }
//             }
//         }
//         cout << x << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// const int MOD = 1e9 + 7;

// int countPermutations(const vector<int> &A)
// {
//     int N = A.size();
//     if (A[0] != 1)
//         return 0;

//     vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
//     dp[1][1] = 1;

//     for (int i = 1; i <= N; ++i)
//     {
//         for (int j = 1; j <= i; ++j)
//         {

//             if (A[i - 1] <= j)
//             {
//                 for (int k = 0; k < i; ++k)
//                 {
//                     dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
//                 }
//             }
//         }
//     }

//     int result = dp[N][A[N - 1]];
//     return result;
// }

// int main()
// {
//     vector<int> A = {1, 2, 3, 1, 2};
//     cout << countPermutations(A) << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// const int MOD = 1e9 + 7;

// int countPermutations(const vector<int>& A) {
//     int N = A.size();
//     if (A[0] != 1) return 0;

//     vector<int> dp(N + 1, 0);
//     dp[1] = 1;

//     for (int i = 2; i <= N; ++i) {
//         vector<int> new_dp(N + 1, 0);
//         int sum = 0;
//         for (int j = 1; j < i; ++j) {
//             sum = (sum + dp[j]) % MOD;
//         }
//         for (int j = 1; j <= i; ++j) {
//             if (A[i - 1] <= j) {
//                 new_dp[j] = sum;
//             }
//         }
//         dp = new_dp;
//     }

//     return dp[A[N - 1]];
// }

// int main() {
//     vector<int> A = {1, 2, 3, 1, 2};
//     cout << countPermutations(A) << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int solve(string s,string t){
//     int n = s.size();
//     string maxNum;
//     if(s[0]>t[0]) maxNum = s;
//     else maxNum = t;

//     priority_queue<pair<char,int>> pq;
//     for(int i=1;i<n;i++){
//         pq.push(make_pair(maxNum[i],i));
//     }
//     int cnt=0;
//     while(!pq.empty()){
//         int idx = pq.top().second;
//         pq.pop();
//         string temp1 = s;
//         string temp2 = t;
//         int diff = abs(stoi(temp1)-stoi(temp2));
//         swap(temp1[idx],temp2[idx]);
//         if(abs(stoi(temp1)-stoi(temp2))<diff){
//             s=temp1;
//             t=temp2;
//             cnt++;
//         }
//     }
//     return cnt;
// }

// int main(){
//     cout << solve("29162","10524");
// }

// #include<bits/stdc++.h>

// using namespace std;

// // Directions for moving in 4 directions: right, down, left, up
// const vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
// const vector<char> directionChars = {'E', 'S', 'W', 'N'};

// // Mapping from 'N', 'E', 'W' to their reverse movements
// const unordered_map<char, char> reverseMapping = {
//     {'N', 'S'},
//     {'E', 'W'},
//     {'W', 'E'}
// };

// string findShortestPathBack(const string &forth) {
//     // Track visited cells and final position
//     unordered_set<string> visited;
//     int x = 0, y = 0;
//     visited.insert("0,0");

//     // Compute final position and track visited cells
//     for (char c : forth) {
//         if (c == 'N') {
//             --y;
//         } else if (c == 'E') {
//             ++x;
//         } else if (c == 'W') {
//             --x;
//         }
//         visited.insert(to_string(x) + "," + to_string(y));
//     }

//     // BFS to find shortest path back to (0,0)
//     queue<pair<int, int>> q;
//     unordered_map<string, int> distance;
//     q.push({x, y});
//     distance[to_string(x) + "," + to_string(y)] = 0;

//     vector<char> backwardDirections = {'S', 'E', 'W'};
//     vector<pair<int, int>> moves = {{0, -1}, {1, 0}, {-1, 0}};

//     while (!q.empty()) {
//         auto coor = q.front();
//         q.pop();

//         if (coor.first == 0 && coor.second == 0) {
//             break;
//         }

//         for (int i = 0; i < 3; ++i) {
//             int newX = coor.first + moves[i].first;
//             int newY = coor.second + moves[i].second;
//             string newPos = to_string(newX) + "," + to_string(newY);

//             if (visited.find(newPos) == visited.end() && distance.find(newPos) == distance.end()) {
//                 distance[newPos] = distance[to_string(coor.first) + "," + to_string(coor.second)] + 1;
//                 q.push({newX, newY});
//             }
//         }
//     }

//     // Generate the path string based on distance
//     stringstream path;
//     int currX = x, currY = y;
//     while (currX != 0 || currY != 0) {
//         for (int i = 0; i < 3; ++i) {
//             int newX = currX + moves[i].first;
//             int newY = currY + moves[i].second;
//             string newPos = to_string(newX) + "," + to_string(newY);

//             if (distance.find(newPos) != distance.end() && distance[newPos] == distance[to_string(currX) + "," + to_string(currY)] - 1) {
//                 path << backwardDirections[i];
//                 currX = newX;
//                 currY = newY;
//                 break;
//             }
//         }
//     }

//     return path.str();
// }

// int main() {
//     string forth = "NEENWN";  // Example input
//     string back = findShortestPathBack(forth);
//     cout << "The shortest path back is: " << back << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// long long solution(long long n, long long k) {
//     vector<string> day;
//     day.resize(n + 1);
//     day[0] = "C";
//     for (long long i = 1; i <= n; ++i) {
//         string a = "", b = "";
//         if (i % 2 == 0) {
//             a = "C";
//             b = "V";
//         } else {
//             a = "V";
//             b = "C";
//         }
//         day[i] = a + day[i - 1] + b + day[i - 1] + a;
//     }

//     long long count = 0;

//     for (long long i = 0; i < k; ++i) {
//         string s = day[n];
//         if (s[i] == 'C') count++;
//     }

//     return count;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    
}
