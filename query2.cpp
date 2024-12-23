#include <iostream>
#include <vector>
using namespace std;

void sum(vector<int> &v, int a, int b)
{
    int sum = 0;
    for (int i = a - 1; i < b; i++)
    {
        sum = v[i] + sum;
    }
    cout << sum << endl;
}

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

    int q;
    cout << "Enter the numbers of query: " << endl;
    cin >> q;

    while (q > 0)
    {
        int start, end;
        cout << "enter range" << endl;
        cin >> start >> end;
        sum(v, start, end);
        q--;
    }

    return 0;
}