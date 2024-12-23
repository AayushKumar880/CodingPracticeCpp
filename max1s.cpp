#include <iostream>
#include <vector>
using namespace std;

void leftMostOneRows(vector<vector<int>> &v)
{

    int leftMostOne = -1;
    int maxOnesrow = -1;
    int j = v[0].size()-1;

    while(j>=0 && v[0][j]==1) {
        leftMostOne = j ;
        maxOnesrow = 0;
        j--;
    }

    for(int i=1 ;i<v.size();i++){
        while (j>=0 && v[i][j]==1){
            leftMostOne = j;
            maxOnesrow = i;
            j--;
        }
    }
    cout<< "Row with max one is " << maxOnesrow;
}

// void max1s(vector<vector<int>> &matrix)
// {
//     int maxOnes = INT8_MIN;
//     int maxOnesrow = -1;
//     int columns = matrix[0].size();

//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[i].size(); j++)
//         {

//             if (matrix[i][j] == 1)
//             {
//                 int numberofOnes = columns - j;
//                 if (numberofOnes > maxOnes)
//                 {
//                     maxOnes = numberofOnes;
//                     maxOnesrow = i + 1;
//                 }

//                 break;
//             }
//         }
//     }
//     cout << "Max number of 1s in " << maxOnesrow;
// }

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

    leftMostOneRows(mat);

    return 0;
}