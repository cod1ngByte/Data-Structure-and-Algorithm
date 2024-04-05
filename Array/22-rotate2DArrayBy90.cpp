#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// leetcode - 48
//  rotate = transpose + reverse each row

void rotate(vector<vector<int>> &mat)
{

    // transpose
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = i + 1; j < mat[i].size(); j++) // upper triangle in matrix
        {

            swap(mat[i][j], mat[j][i]);
        }
    }
    // reverse each row
    for (int i = 0; i < mat.size(); i++)
    {
        reverse(mat[i].begin(), mat[i].end()); // reverse each row
    }
}