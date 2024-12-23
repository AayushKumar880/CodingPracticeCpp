#include <iostream>
using namespace std;

int sumofDigits(int n)
{

    if (n / 10 == 0)
        return n;

    int rem = n % 10;

    int sum = rem + sumofDigits(n / 10);

    return sum;
}

int main()
{
    int n;
    cout << "enter the number : " << endl;
    cin >> n;

    int answer = sumofDigits(n);

    cout << "The sum of digits is " << answer;

    return 0;
}