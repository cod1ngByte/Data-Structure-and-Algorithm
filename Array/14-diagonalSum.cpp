#include <iostream>
using namespace std;

void daigonalSum(int arr[][3], int row, int col) // daigonal -> row == col
{
    for (int i = 0; i < col; i++)
    {
        cout << arr[i][i] << " ";
    }
    /* no need of two loop to access diagonal
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    */
}

void display(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr[][3] = {{10, 20, 30}, {5, 6, 7}, {9, 15, 2}};
    int row = 3;
    int col = 3;
    display(arr, row, col);
    daigonalSum(arr, row, col);
}