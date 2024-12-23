#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    for (int i = 0; i < 6; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    int search;
    cout << "Enter the no to be searched: " << endl;
    cin >> search;
    int lastOccur;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (search == v[i])
        {
            lastOccur = i;
            break;
        }
    }
    cout << "Last occurance is: " << lastOccur;
    return 0;
}