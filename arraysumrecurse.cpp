#include <bits/stdc++.h>
using namespace std;

int sum(int *arr, int idx, int size)
{
    if (idx == size - 1)
    {
        return arr[idx];
    }

    return arr[idx] + sum(arr, idx + 1, size);
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

    int result = sum(array, 0, n);

    cout << "Sum of the elements is: " << result << endl;

    return 0;
}