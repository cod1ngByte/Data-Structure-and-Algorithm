#include <iostream>
using namespace std;

void transpose(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void display(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[][4] = {{10, 20, 30, 40}, {5, 6, 7, 8}, {9, 15, 2, 4}, {1, 11, 3, 6}};
    int row = 4;
    int col = 4;
    cout << " before transpose: " << endl;
    display(arr, row, col);
    transpose(arr, row, col);
    cout << " after transpose: " << endl;
    display(arr, row, col);
}