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
        v[i] = sum;
    }

    cout << "answer array is: " << endl;
    for (int ele : v)
    {
        cout << ele << " ";
    }

    return 0;
}