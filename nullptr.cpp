#include <iostream>
using namespace std;

int main () {
    int *p1 = NULL;
    int *p2 = 0;
    int *p3 = '\0';
    cout << p1 << " " << p2 << " " << p3 << endl;
    cout << *p1 << " " << *p2 << " " << *p3 << " " << endl;

    return 0;

}