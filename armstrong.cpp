#include <iostream>
using namespace std;

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

int isArmstrong(int a, int b)
{
    if (a == 0)
    {
        return 0;
    }
    return powerans(a % 10, b) + isArmstrong(a / 10, b);
}

int main()
{
    int num;

    cout << "Enter the number: " << endl;
    cin >> num;

    int digit = 0;

    int temp = num;

    while (temp != 0)
    {
        temp = temp / 10;
        digit++;
    }

    int result = isArmstrong(num, digit);

    if (result == num)
    {
        cout << "Yes" ;
    }
    else
    {
        cout << "No" ;
    }
    return 0;
}