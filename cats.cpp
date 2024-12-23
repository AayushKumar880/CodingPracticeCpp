#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cin.ignore();

        string s;
        string f;

        cin >> s >> f;

        int count = 0;
        int c1 = 0;
        int c2 = 0;

        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1' && f[j] == '0')
            {
                c1++;
            }
            if (s[j] == '0' && f[j] == '1')
            {
                c2++;
            }
        }
        cout << max(c1,c2)<< endl;
    }
}