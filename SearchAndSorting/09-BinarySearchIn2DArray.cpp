#include <iostream>
#include <vector>
using namespace std;
// l-74

bool binarySearch2D(vector<vector<int>> &mat, int target)
{ // O(log(m*n)) m ->rows, n->cols
    int rows = mat.size();
    int cols = mat[0].size();
    int n = rows * cols;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int row = mid / cols;
        int col = mid % cols;
        int currEle = mat[row][col];
        if (currEle == target)
        {
            return true;
        }
        else if (target > currEle)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}