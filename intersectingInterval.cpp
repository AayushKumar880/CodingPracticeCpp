#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        v[i] = {l, r};
    }
    sort(v.begin(), v.end());
    priority_queue<int, vector<int>, greater<int>> pq;
    
    int ans = 0;
    for(int i = 0; i < n; i++) {
        while(!pq.empty() && pq.top() < v[i].first) {
            pq.pop();
        }
        ans += pq.size();
        pq.push(v[i].second);
    }
    cout << ans << endl;
    return 0;
}
