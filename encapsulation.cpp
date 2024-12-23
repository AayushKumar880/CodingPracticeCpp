#include <bits/stdc++.h>
using namespace std;

class fun
{
    //encapsulation binding of methods & variables together in a class
    int x;//it cant be directly access but access by some class methods

    public:

    void set(int n){
        x = n;
    }

    int get(){
        return x;
    }
};

int main()
{
    fun obj1;
    obj1.set(3);
    cout << obj1.get()<<endl;


    return 0;
}
/*abstraction enables us to dispaly only essential info
while hiding unnecessary implementation details */