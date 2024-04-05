#include <iostream>
#include <vector>
using namespace std;

// leetcode - 2643
vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    int rowMaxOne = 0; // max  count of 1's in a row
    int rowNo = -1;    // index start with zero so -1
    for (int i = 0; i < mat.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
        if (count > rowMaxOne)
        {
            rowMaxOne = count;
            rowNo = i;
        }
    }
    vector<int> v;
    v.push_back(rowNo);
    v.push_back(rowMaxOne);
    return v;
}