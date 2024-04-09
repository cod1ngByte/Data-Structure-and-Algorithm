#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> &v)
{
    for (int col = 0; col < v[0].size(); col++)
    {
        if ((col & 1) == 0)
        { // even
            for (int row = 0; row < v.size(); row++)
            {
                cout << v[row][col] << " ";
            }
        }
        else
        {
            // odd column
            for (int row = v.size() - 1; row >= 0; row--)
            {
                cout << v[row][col] << " ";
            }
        }
        // cout << endl;
    }
}

int main()
{
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};
    wavePrintMatrix(v);
    return 0;
}