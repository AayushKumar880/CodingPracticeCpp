#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

    int array[n];
    cout << "enter the numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int k; 
    cout << "Enter the steps to be rotated: "<< endl;
    cin >> k;
    k=k%n;
    int ansarray[n];

    int j=0;
    for(int i=n-k;i<n;i++) {
        ansarray[j++]=array[i];
    }

    for(int i=0;i<=k;i++) {
        ansarray[j++]=array[i];
    }

    for(int i=0;i<n;i++){
        cout << ansarray[i] << " ";
    }

    return 0;
}
