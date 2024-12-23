#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {20, 50, 40, 10, 30};

    for (int j = 0; j < 5; j++)
    {
        bool flag = false;
        for (int i = 0; i < 4 - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = true;
                swap(arr[i], arr[i + 1]);
            }
        }
        if(!flag) break;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}