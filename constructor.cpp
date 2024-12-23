#include <bits/stdc++.h>
using namespace std;

class Rectangle
{ // constructor used to initialise an obj
public:
    int l;
    int b;

    Rectangle()
    { // default constructor - no args passed
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y)
    { // parametrised constructor - args pass
        l = x;
        b = y;
    }

    Rectangle(Rectangle &r)
    { // copy constructor- initialkes an obj byb another one
        l = r.l;
        b = r.b;
    }

    ~Rectangle()
    { // Destructor
        cout << "Destructor is called" << endl;
    }
};

int main()
{

    // Rectangle r1; // object
    // cout << r1.l<<" "<<r1.b<<endl;

    Rectangle *r1 = new Rectangle();
    cout << r1->l << " " << r1->b << endl;
    delete r1;

    Rectangle r2(3, 4);
    cout << r2.l << " " << r2.b << endl;

    Rectangle r3 = r2;
    cout << r3.l << " " << r3.b << endl;

    Rectangle r4(r2);
    cout << r4.l << " " << r4.b << endl;

    return 0;
}