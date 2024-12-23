#include <bits/stdc++.h>
using namespace std;

void spiral(vector<vector<int>> &v)
{
    int left = 0;
    int right = v[0].size() - 1;
    int top = 0;
    int bottom = v.size() - 1;

    int direction = 0; 

    while (top <= bottom && left <= right)
    {
        if (direction == 0)
        {
            for (int col = left; col < v[0].size(); col++)
            {
                cout << v[top][col] << " ";
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int row = top; row < v.size(); row++)
            {
                cout << v[row][right] << " ";
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << v[bottom][col] << " ";
            }
            bottom--;
        }
        else if (direction == 3)
        {
            for (int row = bottom; row >= top; row--)
            {
                cout << v[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

int main()
{
    int n, m;
    cout << "Enter the size of the matrix" << endl;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cin >> matrix[i][j];
        }
    }

    spiral(matrix);

    return 0;
}