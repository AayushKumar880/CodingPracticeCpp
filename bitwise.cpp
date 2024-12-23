#include <iostream>
using namespace std;

int main()
{

    // int a=4; // 100
    // int b=6; // 110

    // cout << (a|b) << endl; // or
    // cout << (a&b) << endl; // and
    // cout << (a^b) << endl; // exclusive or
    // cout << (a<<1) << endl; // left shift
    // cout << (b>>1) << endl; // right shift

    // return 0;

    int n = 8, x = 2;
    // to check xth bit is set
    if (n & (1 << x))
        cout << "YES\n";
    else
        cout << "NO\n";
    // to set the bit
    n = n | (1 << x);
    // to toggle the setted bit
    n = n ^ (1 << x);
    // to find LSB
    int LSB = n & (-n);
    // to unset LSB
    n = n ^ LSB;
    // to find x is submask of y or not
    int x, y;
    // Method 1
    if (x & y == x){}
    // Method 2
    if (x | y == y){}
    cout << LSB ;
}