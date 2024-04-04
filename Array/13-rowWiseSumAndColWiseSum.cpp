#include <iostream>
#include <limits.h>
using namespace std;

void rowWiseSum(int arr[][4], int row, int col)
{
    int rowMax = INT_MIN;
    for (int i = 0; i < row; i++) // row
    {
        int sum = 0;
        for (int j = 0; j < col; j++) // col
        {
            sum = sum + arr[i][j];
        }
        cout << "row " << i << " sum -> " << sum << endl;
        rowMax = max(sum, rowMax);
    }
    cout << "row max sum " << rowMax << endl;
}

void colWiseSum(int arr[][4], int row, int col)
{
    int colMax = INT_MIN;
    for (int i = 0; i < col; i++) // col
    {
        int sum = 0;
        for (int j = 0; j < row; j++) // row
        {
            sum = sum + arr[j][i];
        }
        cout << "col " << i << " sum -> " << sum << endl;
        colMax = max(sum, colMax);
    }
    cout << "col Max sum " << colMax << endl;
}

void display(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[][4] = {{10, 20, 30, 40}, {5, 6, 7, 8}, {9, 15, 2, 4}};
    int row = 3;
    int col = 4;
    display(arr, row, col);
    cout << endl;
    rowWiseSum(arr, row, col);
    cout << endl;
    colWiseSum(arr, row, col);
}