#include <bits/stdc++.h>
using namespace std;

vector<int> countsort(string v)
{

    vector<int> freq(26, 0);

    for (int i = 0; i < v.size(); i++)
    {
        int index = v[i] - 'a';
        freq[index]++;
    }

    return freq;

    // int j = 0;
    // for (int i = 0; i < 26; i++)
    // {
    //     while (freq[i]--)
    //     {
    //         v[j++] = i + 'a';
    //     }
    // }
}

bool IsAnagram(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }
    
    return countsort(s) == countsort(t);

    // int i = 0;
    // while (s[i] != '\0' && t[i] != '\0')
    // {
    //     if (s[i] == t[i])
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         false;
    //         break;
    //     }
    // }
    // return true;
}

int main()
{
    string s, t;
    cout << "Enter 1st word: " << endl;
    getline(cin, s);
    cout << "Enter 2nd word: " << endl;
    getline(cin, t);

    cout << endl;

    int anagram = IsAnagram(s, t);
    if (anagram)
    {
        cout << "yes";
    }
    else
        cout << "no";

    return 0;
}