#include <iostream>
using namespace std;

void input(int matrix[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void multiply(int mat1[][3], int mat2[][3])
{
    int ans[3][3] = {0} ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                ans[i][j] = mat1[i][k] * mat2[k][j] +ans[i][j];
            }
        }
    }

    cout << "the ans matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat1[3][3];
    int mat2[3][3];

    cout << "enter the elements of first matrix: " << endl;
    input(mat1);
    cout << "enter the elements of second matrix: " << endl;
    input(mat2);
 
    multiply(mat1, mat2);

    return 0;
}