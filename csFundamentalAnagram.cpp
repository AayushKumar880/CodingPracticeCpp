#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<string, string> country;

    country.insert(make_pair("GBR", "Great Britain"));
    country.insert(make_pair("IND", "India"));
    country.insert(make_pair("IDN", "Indonesia"));

    string countryCode;
    cin >> countryCode;

    if (country.find(countryCode) != country.end())
    {
        cout << country[countryCode] << endl;
    }
    else
        cout << "Not Found" << endl;
}