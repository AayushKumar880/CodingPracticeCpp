#include <bits/stdc++.h>
using namespace std;

void countsort(vector<int> &v, int pos)
{
    vector<int> freq(10, 0);

    for (int i = 0; i < v.size(); i++)
    {
        freq[(v[i] / pos) % 10]++;
    }

    for (int i = 1; i < freq.size(); i++)
    {
        freq[i] += freq[i - 1];
    }

    vector<int> ans(v.size());

    for (int i = v.size() - 1; i >= 0; i--)
    {
        ans[--freq[(v[i] / pos) % 10]] = v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        v[i] = ans[i];
    }
}

void radixsort(vector<int> &v, int n, int max)
{
    for (int pos = 1; max / pos > 0; pos *= 10)
    {
        countsort(v, pos);
    }
}

int main()
{
    int n;
    cout << "enter the no of elements: " << endl;
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v[i] = ele;
    }

    int max = *max_element(v.begin(), v.end());

    radixsort(v, n, max);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}