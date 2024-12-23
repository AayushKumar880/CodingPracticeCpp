#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &v, int start, int end, int target)
{
    //time O(logn)
    //space O(logn)
    if (start > end)
    {
        return -1;
    }

    int mid = start + (start - end) / 2;

    if (v[mid] == target)
    {
        return mid;
    }

    if (v[mid] < target)
    {
       return binarysearch(v, mid + 1, end, target);
    }
    else
    {
        return binarysearch(v, start, mid - 1, target);
    }
}

// int binarysearch(vector<int> &v,int start, int end,int target)
// {
//     // time O(logn)
//     //space O(1)
//     while (start <= end)
//     {
//         int mid = (start + end) / 2; value may overflow upon addition
//         if (v[mid] == target)
//         {
//             return mid;
//         }
//         else if (v[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    vector<int> v(n);
    cout << "enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v[i] = ele;
    }
    cout << endl;

    sort(v.begin(), v.end());

    int target;
    cout << "enter the target: " << endl;
    cin >> target;

    int idx = binarysearch(v, 0, n - 1, target);
    if (idx == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "your result present at " << idx;
    }
    return 0;
}