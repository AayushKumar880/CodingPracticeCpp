#include <bits/stdc++.h>
using namespace std;

// void f(int n)
// {
//     if (n == 1)
//     {
//         cout << n;
//         return;
//     }
//     f(n - 1);

//     cout << n;
// }

// void f(int n, int k)
// {
//     if (k == 1)
//     {
//         cout << n << " ";
//         return;
//     }
//     f(n, k - 1);
//     cout << n * k << " ";
// }

int f(int n)
{
    int result = 0;

    if (n == 0)
    {
        return n;
    }
    if (n % 2 == 0)
    {
        result = f(n - 1) - n;
    }
    if (n % 2 != 0)
    {
        result = f(n - 1) + n;
    }

    return result;
}

int main()
{
    int n, k;
    cout << "enter n: " << endl;
    cin >> n;

    cout << f(n);

    return 0;
}