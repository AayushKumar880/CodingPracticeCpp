#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int array[n];
    cout << "enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int max1 = 0;
    int max2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max1)
        {
            max2 = max1;
            max1 = array[i];
        }
        if (array[i] > max2 && array[i] < max1)
        {
            max2 = array[i];
        }
    }

    cout << max2;

    return 0;
}