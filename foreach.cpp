#include <iostream>
using namespace std;
// foreach loop does not have index flexibility
int main()
{ 
    int n;
    cout << "Select the size of array: " << n << endl;
    cin >> n;

    int array[n];

    cout << "enter the elements: " << endl;
    for (int &element : array)
    {
        //&element stores the elment at same address
        cin >> element;
    }

    cout << "Your elements are: " << endl;
    for (int element : array)
    {
        cout << element << endl;
    }

    return 0;
}