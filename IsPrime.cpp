#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<bool> isPrime(1e6, true);
    vector<int> sum(1e6, 0);
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i < 1e6; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= 1e6; j += i)
            {
                isPrime[j] = false;
                sum[j] += i;
            }
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        cout << sum[n] << endl;
    }
}