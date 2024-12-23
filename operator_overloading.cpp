#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex(int x, int y)
    {
        real = x;
        img = y;
    }

    Complex operator+(Complex &c)
    {
        Complex ans(0,0);
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};

int main()
{

    Complex c1(3,4);
    Complex c2(1,2);

    Complex c3 = c1 + c2;// c2 will pass as an arg and operator work for c1
    cout << c3.real <<" i" << c3.img;
    return 0;
}//complile time polymorphsim