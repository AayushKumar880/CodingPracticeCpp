#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1e5+1,-1);
int cnt = 0;

// int fibo(int n)
// {

//     if (n == 1 || n == 2)
//         return n - 1;

//     int answer = fibo(n - 1) + fibo(n - 2);
//     return answer;
// }


//dp with recursion
int fibo(int n){
    cnt++;
    if(n==2 || n==1){
        return n-1;
    }

    if(dp[n]!=-1){
        return dp[n];
    } 

    return dp[n] = fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    cout << "Enter the term you want to print :" << endl;
    cin >> n;

    int answer = fibo(n);
    cout << "Your " << n << " term of fibo series is : " << answer << endl;
    cout << "Count = " << cnt;
    return 0;
}