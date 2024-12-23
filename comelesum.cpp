#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 1, 2, 3, 3, 3};
    vector<int> v2 = {5, 6, 7, 5, 2, 3, 6};
    set<int> common;
    for (int i = 0; i < v1.size(); i++)
    {
        common.insert(v1[i]);
    }
    int sum = 0;
    for (int i = 0; i < v2.size(); i++)
    {
        if (*common.find(v2[i]) == v2[i])
        // same if(common.find(v2[i])!=common.end())
        {
            sum += v2[i];
        }
    }
    cout << sum;
}