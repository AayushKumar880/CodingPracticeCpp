#include <bits/stdc++.h>
using namespace std;

// int powerans(int a, int b)
// {

//     if (b == 1)
//         return a;

//     return a * powerans(a, b - 1);
// }

// optimised code

int square(int a)
{
    return a * a;
}

int powerans(int a, int b)
{
    if (b == 1)
        return a;

    if (b % 2 == 0)
        return square(powerans(a, b / 2));
    if (b % 2 != 0 && b != 1)
        return a * square(powerans(a, b / 2));
}
int main()
{
    int num;
    cout << "Enter number: " << endl;
    cin >> num;

    int power;
    cout << "Enter power: " << endl;
    cin >> power;

    int answer = powerans(num, power);

    cout << "Answer is: " << answer;

    return 0;
}