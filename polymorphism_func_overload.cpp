// ability of obj/methods to take differnt forms
// compile time & run time polymorphism
#include <bits/stdc++.h>
using namespace std;

class Sum
{
public:
    void add(int x, int y)
    {
        int sum = x + y;
        cout << sum << endl;
    }

    void add(int x, int y, int z)
    {
        int sum = x + y + z;
        cout << sum << endl;
    }

    void add(float x, float y)
    {
        float sum = x + y;
        cout << sum << endl;
    }

    void add(string x, string y)
    {
        string sum = x + y;
        cout << sum << endl;
    }
};

int main()
{
    Sum s;
    s.add(3, 4);
    s.add(3, 4, 5);
    s.add(float(3.9), float(6.9));
    s.add("hi", "bye");
    /*it will be decided at compile time
    which ADD function to called in case*/

    return 0;
}
