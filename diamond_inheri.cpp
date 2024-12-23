#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A class" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B class" << endl;
    }
};

class C : public A
{
public:
    C()
    {
        cout << "C class" << endl;
    }
};

class D : public B
{
public:
    D()
    {
        cout << "D class" << endl;
    }
};
class E : public C
{
public:
    E()
    {
        cout << "E class" << endl;
    }
};
class F : public E, public D
{
public:
    F()
    {
        cout << "F class" << endl;
    }
};

int main()
{
    F diamond;
    return 0;
}