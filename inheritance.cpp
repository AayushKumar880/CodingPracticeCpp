#include <bits/stdc++.h>
using namespace std;

// class Parent{

//     public:
//     int x;

//     private:
//     int y;

//     protected:
//     int z;
// };

// class Child1: public Parent{
//     //x -> public
//     //y -> private
//     //z -> inaccessible
// };

// class Child2: private Parent{
//     //x & y-> private
//     //z -> inaccessible
// };

// class Child3: protected Parent{
//     //x & y -> protected
//     //z -> inaccessible
// };

class Parent
{
public:
    Parent()
    {
        cout << "Parent class." << endl;
    }
};

class Child1 : public Parent
{ // single level inheritance
public:
    Child1()
    {
        cout << "Child class." << endl;
    }
};

class GChild : public Child1
{
public:
    GChild()
    {
        cout << "GrandChild class." << endl;
    }
};

class GChild2 : public Parent, public Child1
{
public:
    GChild2()
    {
        cout << "Grand Child 2";
    }
};

int main()
{
    Child1 c1; // single level
    GChild c2; // multilevel inheritance
    GChild2 c3; // multiple inheritance 
    return 0;
}