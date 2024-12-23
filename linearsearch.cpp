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

    int search;
    cout << "Enter the elment you search: " << endl;
    cin >> search;
    bool flag;
    int index;

    for (int i = 0; i < n; i++)
    {
        if (search == array[i])
        {
            flag = true;
            index = i;
            break;
        }
    }

    if (flag)
    {
        cout << "element present at index " << index << endl;
    }
    else
        cout << "-1";

    return 0;
}