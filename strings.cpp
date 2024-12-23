#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1;
    getline(cin,str);// if use simply cin input will terminate on space 
    cout << str;

    string str2;
    getline(cin,str2);// if use simply cin input will terminate on space 
    cout << str2;

    //commonly used functions in strings
    reverse(str.begin(),str.end());//reverse the str O(n)

    substr(0,4); //substr(initial,end); O(n)

    str1 + str2; // concatenate two strings

    strcat(str1,str2);// concatenate two char arrays

    str1.push_back(char);
    str1.size();//size of a string O(1)
    strlen(str1);//size of a char array O(n);

    int num = 432;
    to_string(num);// convert numeric value to string

    

}
/*1.string is a class and string variables are on=bjets
of this class Whereas array of char data types.
2.dynamix memmory allocation in char static memory alloaction.
3.strings have inbuilt functions, char are faster than strings*/
