#include <iostream>
using namespace std ;

int main () {

    int num;

    cout << "Enter the number: " << endl;
    cin >> num;

    int digit=0;

    while ( num!=0)
    {
        num = num/10;
        digit++;
    }

    cout << " Number of digits are " << digit ;

    return 0;
    
}