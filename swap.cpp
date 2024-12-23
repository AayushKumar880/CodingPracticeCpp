#include <iostream>
using namespace std;

int main() {

    int a,b ;
     cout << "Enter a:" << endl;
     cin >> a ;

     cout << "Enter b:" << endl;
     cin >> b ;

     int temp;
     
     temp = b;
     b=a;
     a=temp;

     cout << "a is:"<< a<<" b is:" << b << endl;

     return 0;
}