#include <iostream>
using namespace std;

void leftShift(int *arr, int size)
{
    int firstEle = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = firstEle;
}

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    leftShift(arr, size);
    display(arr, size);
}