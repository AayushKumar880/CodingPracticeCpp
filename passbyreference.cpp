#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *y;
    // *y=derefrencing, i.e fetches the value stored in pointer y
    *y = *x;
    *x = temp;
    cout << "Swap result: " << *x << " " << *y;
}

int main()
{
    int a, b;
    cout << "Enter the nos." << endl;
    cin >> a >> b;

    int* p1 = &a;
    int* p2 = &b;

    swap(p1, p2);

    return 0;
}