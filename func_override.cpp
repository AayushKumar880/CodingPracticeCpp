#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    virtual void print()
    {
        cout << "Parent class1" << endl;
    }

    void get()
    {
        cout << "Parent class2" << endl;
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << "Child class1" << endl;
    }

    void get()
    {
        cout << "Child class2" << endl;
    }
};

int main(){
    Parent *p;
    Child c;

    p = &c;//override child class *using virtual command
    p->print();
    p->get();
}