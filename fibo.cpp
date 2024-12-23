#include <iostream>
using namespace std;

int main () {

    int a = 0;
    int b = 1;
    int c ;

    int n;
    cout  << "Enter the term you want to print :" << endl;
    cin >> n;
    for(int i = 1 ; i < n ; i++){
        c = a+b;
        a = b;
        b = c;
    }

    cout << "Your term is : " << a << endl;

    return 0;
}