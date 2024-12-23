#include <bits/stdc++.h>
using namespace std;

void insertionsort(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        int current = v[i];
        int j = i - 1;
        while (current < v[j] && j >= 0)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = current;
    }
}

int main()
{
    vector<int> v;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < 5; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    insertionsort(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}