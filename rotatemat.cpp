#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        reverse(v[i].begin(), v[i].end());
    }

    cout << "Resultant matrix is " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n, m;
    cout << "Enter the dimension of matrix:" << endl;
    cin >> n >> m;

    // define a 2d vector
    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Enter the elements of matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    rotate(mat);

    return 0;
}