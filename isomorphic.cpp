#include <bits/stdc++.h>
using namespace std;

bool IsIsomorphic(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }

    vector<int> freqS(26, -1);
    vector<int> freqT(26, -1);

    int i = 0;
    int j = 0;
    while (i < s.size() && j < t.size())
    {
        int index1 = s[i++] - 'a';
        int index2 = t[j++] - 'a';
        if (freqS[index1] == freqT[index2])
        {
            freqS[index1] = i;
            freqT[index2] = j ;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s, t;
    cout << "Enter 1st word: " << endl;
    getline(cin, s);
    cout << "Enter 2nd word: " << endl;
    getline(cin, t);

    cout << endl;

    int isomorph = IsIsomorphic(s, t);
    if (isomorph)
    {
        cout << "yes";
    }
    else
        cout << "no";

    return 0;
}