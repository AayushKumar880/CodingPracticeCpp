#include <bits/stdc++.h>
using namespace std;

void countsort(vector<int> &v, int size)
{

    vector<int> freq(size, 0);

    for (int i = 0; i < v.size(); i++)
    {
        freq[v[i]]++;
    }

    for (int i = 1; i < size; i++)
    {
        freq[i] += freq[i - 1];
    }

    vector<int> ans(v.size());

    for (int i = v.size() - 1; i >= 0; i--)
    {
        ans[--freq[v[i]]] = v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << ans[i] << " ";
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
        v.push_back(ele);
    }
    int size = *max_element(v.begin(), v.end()) + 1;

    countsort(v, size);

    return 0;
}