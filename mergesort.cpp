#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int start, int middle, int end)
{
    int n1 = middle - start + 1;
    int n2 = end - middle;

    vector<int> leftArray(n1);
    vector<int> rightArray(n2);

    // Copy data to temporary arrays leftArray[] and rightArray[]
    for (int i = 0; i < n1; i++)
    {
        leftArray[i] = v[start + i];
    }
    for (int j = 0; j < n2; j++)
    {
        rightArray[j] = v[middle + 1 + j];
    }

    // Merge the temporary arrays back into array[left..right]
    int i = 0;
    int j = 0;
    int k = start;

    while (i < n1 && j < n2)
    {
        if (leftArray[i] < rightArray[j])
        {
            v[k++] = leftArray[i++];
        }
        else
        {
            v[k++] = rightArray[j++];
        }
    }

    // Copy the remaining elements of leftArray[], if there are any
    while (i < n1)
    {
        v[k++] = leftArray[i++];
    }

    // Copy the remaining elements of rightArray[], if there are any
    while (j < n2)
    {
        v[k++] = rightArray[j++];
    }
}

void mergesort(vector<int> &v, int start, int end)
{
    if (start < end)
    {
        return;
    }

    int middle = (start + end) / 2;

    // Sort first and second halves
    mergesort(v, start, middle);
    mergesort(v, middle + 1, end);

    // Merge the sorted halves
    merge(v, start, middle, end);
}

int main()
{

    vector<int> v;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < 6; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int size = v.size();

    mergesort(v, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}