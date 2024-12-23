#include <bits/stdc++.h>
using namespace std;

class String
{
    int length;
    char *p;

public:
    String()
    {
        p = NULL;
    }
    String(char *a)
    {
        length = strlen(a);
        p = new char[length+1];
        strcpy(p, a);
    }
    void show()
    {
        cout << this->p << endl;
    }
    operator char *()
    {
        return(p);
    };
};

int main()
{
    String s1, s2;
    char *name1 = "Ashutosh";
    s1 = String(name1);
    char *name2 = "Ojha";
    s2 = name2;
    s1.show();
    s2.show();
    char *name3 = s2;
    cout << name3;
}