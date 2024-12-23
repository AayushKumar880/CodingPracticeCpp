#include <bits/stdc++.h>
using namespace std;

int findmax(int *array, int idx, int size)
{

    if (idx == size - 1)
        return array[idx];

    return max(array[idx], findmax(array, idx + 1, size));
}

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

    int result = findmax(array, 0, n);
    cout << result;

    // int max = array[0];
    // for (int i = 1; i < n; i++)
    // {
    //     if (array[i] > max)
    //     {
    //         max = array[i];
    //     }
    // }
    // cout << "max number is: " << max;

    return 0;
}