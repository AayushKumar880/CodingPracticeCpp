#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.size() - 2; i++)
        {
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')
            {
                s.erase(i + 1, 1);
                count++;
            }
            if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')
            {
                s.erase(i + 1, 1);
                count++;
            }
        }
        cout << count << "\n";
    }
}