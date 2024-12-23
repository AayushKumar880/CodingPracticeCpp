#include <bits/stdc++.h>
using namespace std;

void encode(string str)
{
    string newStr = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ']')
        {
            newStr.push_back(str[i]);
        }
        else
        {
            string tempStr;
            while (!newStr.empty() && newStr.back()!='[')
            {
                tempStr.push_back(newStr.back());//extract str to insert
                newStr.pop_back();//delete it from newstr
            }

            //reverse the tempStr
            reverse(tempStr.begin(), tempStr.end());
            newStr.pop_back();//remove [

            string num;
            while ((newStr.back() >= '0' && newStr.back() <= '9') && !newStr.empty() )
            {
                num.push_back(newStr.back());
                newStr.pop_back();
            }

            reverse(num.begin(), num.end());
            int digit = stoi(num);
            while(digit)
            {
                newStr += tempStr;
                digit--;
            }
        }
    }

    cout << newStr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);              
    cout.tie(NULL);
    
    string str;
    getline(cin, str);

    encode(str);
    return 0;
}