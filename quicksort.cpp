#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int start, int end)
{
    int pivot = v[end];
    int i = start - 1;
    for (int j = i + 1; j < end; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[end]);

    return (i + 1);
}

void quicksort(vector<int> &v, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pi = partition(v, start, end);

    quicksort(v, start, pi - 1);
    quicksort(v, pi + 1, end);
}

int main()
{

    vector<int> v = {10, 3, 7, 9, 1, 8};

    quicksort(v, 0, v.size() - 1);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}