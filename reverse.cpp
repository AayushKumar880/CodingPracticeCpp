#include <iostream>
using namespace std ;

int main () {

    int num;

    cout << "Enter the number: " << endl;
    cin >> num;

    int newNum=0;

    while ( num!=0)
    {
        int rem = num%10;
        newNum = newNum*10 + rem ;
        num/=10;

    }

    cout << " New number is " << newNum;

    return 0;
    
}