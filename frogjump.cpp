#include <bits/stdc++.h>
using namespace std;

int min_cost(int *arr, int tot_step, int cur_step)
{
    if (cur_step == tot_step - 1)
    {
        return 0;
    }
    if (cur_step == tot_step - 2)
    {
        return abs(arr[cur_step] - arr[cur_step - 1]) + min_cost(arr, tot_step, cur_step + 1);
    }
    return min(abs(arr[cur_step] - arr[cur_step + 1]) + min_cost(arr, tot_step, cur_step + 1),
               abs(arr[cur_step] - arr[cur_step + 2]) + min_cost(arr, tot_step, cur_step + 2));
}

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

    cout << min_cost(array, n, 0);
    
    return 0;
}