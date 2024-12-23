#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n == 1 || n == 0)
        return n;

    int ans = n * factorial(n - 1);

    return ans;
}

int main()
{
    int n;

    cout << "Enter the number :" << endl;
    cin >> n;

    int answer = factorial(n);

    cout << "Your answer is : " << answer;

    return 0;
}