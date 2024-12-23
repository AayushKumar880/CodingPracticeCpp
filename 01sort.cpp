#include <iostream>
#include <vector>
using namespace std;

// void sort(vector<int> &v)
// {
//     int countzero = 0;

//     for (int ele : v)
//     {
//         if (ele == 0)
//         {
//             countzero++;
//         }
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (i < countzero)
//         {
//             v[i] = 0;
//         }
//         else
//             v[i] = 1;
//     }
// }
void sort(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size();

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if (v[left_ptr] == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] == 1)
        {
            right_ptr--;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v);

    // vector<int> freq(2,0);
    // for (int i = 0; i < n; i++)
    // {
    //     freq[v[i]]++;
    // }

    // for(int i=0;i<freq[0];i++) {
    //     v[i]=0;
    // }
    // for(int i=freq[0];i<n;i++) {
    //     v[i]=1;
    // }

    for (int ele : v)
    {
        cout << ele << " ";
    }
    return 0;
}