#include <bits/stdc++.h>
using namespace std;

void f(vector<string> &v, int i, string &str, string comb, vector<string> &result)
{
    if (i == str.size())
    {
        result.push_back(comb);
        return;
    }

    int digit = str[i] - '0';

    for (int j = 0; j < v[digit].size(); j++)
    {
        f(v, i + 1, str, comb + v[digit][j], result);
    }
    return ;
}

int main()
{
    vector<string> v(10);
    v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    string str = "23";

    vector<string> result;

    f(v, 0, str, "", result);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}