#include <bits/stdc++.h>
using namespace std;

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

    for (int i = 0; i < v.size() - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < v.size(); j++)
        {
            if(v[j] < v[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(v[i],v[min_idx]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
