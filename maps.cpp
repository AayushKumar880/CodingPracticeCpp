#include <bits/stdc++.h>
using namespace std;

// int main(){
//     map<string,int> phone;
//     int n;
//     cout << "No of directory you wnat to add:\n";
//     cin >> n;
//     for(int i=0;i<n;i++){
//         string name;cin>>name;
//         int num;cin >> num;
//         phone[name] = num; 
//     }
//     for(auto ele:phone){
//         cout << ele.first << "\t" << ele.second << endl;
//     }

// }
int main() {
    map<int,int> mp;
    vector<int> v = {1,1,2,1,3,3,3};
    for(auto ele:v){
        mp[ele]++;
    }
    int sum =0;
    for(auto ele:mp){
        if(ele.second > 1){
            sum+=ele.first;
        }
    }
    cout << sum;
}