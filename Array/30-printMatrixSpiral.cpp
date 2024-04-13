#include <iostream>
#include <vector>
using namespace std;

// leetcode - 54
vector<int> spriralOrder(vector<vector<int>> &mat)
{

    int m = mat.size();    // number of rows
    int n = mat[0].size(); // number of cols
    int startRow = 0;
    int endCol = n - 1;
    int endRow = m - 1;
    int startCol = 0;
    int totalEle = m * n;
    int count = 0;
    vector<int> ans;
    while (count < totalEle)
    {

        // toprow
        for (int i = startCol; i <= endCol && count < totalEle; i++)
        {
            ans.push_back(mat[startRow][i]);
            count++;
        }
        startRow++;

        // endCol
        for (int i = startRow; i <= endRow && count < totalEle; i++)
        {
            ans.push_back(mat[i][endCol]);
            count++;
        }
        endCol--;

        // endRow
        for (int i = endCol; i >= startCol && count < totalEle; i--)
        {
            ans.push_back(mat[endRow][i]);
            count++;
        }
        endRow--;

        // startCol
        for (int i = endRow; i >= startRow && count < totalEle; i--)
        {
            ans.push_back(mat[i][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}