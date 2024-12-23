#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the size of array: " << endl;
//     cin >> n;

//     int array[n];
//     cout << "enter the elements of the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     int sum;
//     cout << "Enter the sum to be find: " << endl;
//     cin >> sum;
//     int pair = 0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (array[i] + array[j] == sum)
//             {
//                 pair++;
//             }
//         }
//     }

//     cout << "Number of pairs are: " << pair;

//     return 0;
// }

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int in;cin>>in;v.push_back(in);
    }
    int t;cin>>t;
    unordered_map<int,int> m;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(m.find(abs(v[i]-t))!=m.end()){
            cout << v[i] << " " << m.find(abs(v[i]-t))->first << endl;
            flag = false;
            break;
        }else{
            m[v[i]]=i;
        }
    }
    if(flag){
        cout << -1 << endl;
    }
    
}