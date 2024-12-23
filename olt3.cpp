#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int ssiz=s.size();
    int tsiz=t.size();
    if(ssiz%tsiz!=0){
        cout << -1 << endl;
    }else{
        //KMP algo
        vector<int> pi(tsiz);
        pi[0]=0;
        int j=0;
        for(int i=1;i<tsiz;i++){
            while(j>0&&s[i]!=s[j]){
                j=pi[j-1];
            }
            if(s[i]==s[j]){
                j++;
            }
            pi[i]=j;
        }
        int minSize=tsiz-pi[tsiz-1];
        cout << t.substr(0,minSize);
    }
}