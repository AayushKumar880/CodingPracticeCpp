#include <bits/stdc++.h>
using namespace std;

int f(int rows, int col, int cur_row, int cur_col)
{
    if (cur_row == rows - 1 && cur_col == col - 1)
    {
        return 1;
    }
    if(cur_row >= rows || cur_col >= col)
    {
        return 0;
    }

    return f(rows, col, cur_row + 1, cur_col) + f(rows, col, cur_row, cur_col + 1);
}

int main()
{
    int n, m;
    cout << "Enter the dimensions of the grid: " << endl;
    cin >> n >> m;

    int ways = f(n, m, 0, 0);
    cout << ways;

    return 0;
}