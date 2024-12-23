#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.push_back(1); // insert a no. at the end
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.push_back(3);
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.push_back(4);
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.resize(5); // change the size of vector
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.resize(10);
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.resize(8); // capacity will not change here
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.pop_back(); // delete the last element
    v.pop_back();
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.insert(v.begin() + 2, 5); /*insert a element at
     postion v.begin is reference*/
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    v.erase(v.end() - 3);
    cout << "size: " << v.size() << endl;
    cout << "capacity: " << v.capacity() << endl;

    return 0;
}