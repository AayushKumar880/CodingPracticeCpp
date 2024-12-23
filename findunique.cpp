#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array: " << endl;
    cin >> n;

    int array[n];
    cout << "enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                array[i] = array[j] = -1;
            }
        }
    }

    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            unique = array[i];
        }
    }

    cout << "Unique number is " << unique;

    return 0;
}