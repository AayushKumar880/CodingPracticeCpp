#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = v[i] + sum;
    }

    int prefix = 0, suffix = sum;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        prefix = prefix + v[i];
        suffix = suffix - v[i];
        if (prefix == suffix)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "partition possible" << endl;
    }

    else
        cout << "not possible";

    return 0;
}