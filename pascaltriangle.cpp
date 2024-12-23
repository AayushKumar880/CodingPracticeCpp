#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > pascalTriangle(int n)
{
    vector<vector<int> > pascal(n);
    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i+1); 
        for (int j = 0; j < i + 1; j++)
        {
            if (j == i || j == 0 )
            {
                pascal[i][j] = 1;
            }

            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }

    return pascal;
}

int main()
{

    int n; 
    cout << "Enter the size of array: " << endl;
    cin >> n;
    vector<vector<int>> v(n);

    v = pascalTriangle(n);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}