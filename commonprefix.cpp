#include <bits/stdc++.h>
using namespace std;

// void CommonPrefix(vector<string> &arr, int n)
// {
//     string newStr;

//     for (int i = 0; i < arr[0].size(); i++)
//     {
//         int flag = 0;
//         char check = arr[0][i];

//         for (int j = 1; j < n; j++)
//         {
//             if (arr[j][i] == check)
//             {
//                 continue;
//             }
//             else
//             {
//                 flag++;
//                 break;
//             }
//         }

//         if (flag)
//         {
//             break;
//         }

//         else
//         {
//             newStr = newStr + check;
//         }
//     }
//     if (newStr.empty())
//     {
//         cout << "No commmon prefix" << endl;
//     }
//     else
//     {
//         cout << "Common prefix is " << newStr;
//     }
// }

void CommonPrefix(vector<string> &arr)
{
    string strNew;

    sort(arr.begin(), arr.end());

    int i = 0, j = 0;
    string s1 = arr[0];
    string s2 = arr[arr.size() - 1];

    while (i < s1.size() && j < s2.size())
    {
        if (s1[i] == s2[j])
        {
            strNew.push_back(s1[i]);
            i++;
            j++;
        }
        else
            break;
    }
    
    if (strNew.empty())
        {
            cout << "No commmon prefix" << endl;
        }
        else
        {
            cout << "Common prefix is " << strNew;
        }
}

int main()
{
    int n;
    cout << "Enter the no of elemnets: " << endl;
    cin >> n;
    cin.ignore(); // to ignore a new line character in buffer array

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        string ele;
        getline(cin, ele);
        arr[i].assign(ele);
    }

    CommonPrefix(arr);
}