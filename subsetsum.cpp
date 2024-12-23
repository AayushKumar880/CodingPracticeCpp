#include <bits/stdc++.h>
using namespace std;

void subset(string &str, int i, string sub, vector<string> &result)
{
    // if (i == size)
    // {
    //     result.push_back(sum);
    //     return;
    // }
    if (i == str.length())
    {
        result.push_back(sub);
        return;
    }

    subset(str, i + 1, sub + str[i], result);
    subset(str, i + 1, sub, result);
}

int main()
{
    // int n;
    // cout << "Enter the size of array" << endl;
    // cin >> n;

    // int array[n];
    // cout << "enter the numbers: " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }

    vector<string> result;

    string str = "abc";

    // string result = "";

    subset(str, 0, "", result);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    // cout << result;

    return 0;
}