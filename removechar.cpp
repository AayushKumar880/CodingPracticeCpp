#include <bits/stdc++.h>
using namespace std;

// void remove(string &str, int idx)
// {

//     if (str[idx] == '\0')
//     {
//         return;
//     }
//     if (str[idx] != 'a')
//     {
//         cout << str[idx];
//     }
//     remove(str, idx + 1);
// }

// one more way

string remove(string &str, int idx)
{
    if (str[idx] == '\0') return "";

    string curr = "";

    curr += str[idx];

    return ((str[idx] == 'a') ? "" : curr) + remove(str, idx + 1);
}

int main()
{

    string str = "abcax";

    cout << remove(str, 0);

    return 0;
}