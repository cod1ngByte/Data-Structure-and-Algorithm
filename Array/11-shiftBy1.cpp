#include <iostream>
using namespace std;

void shiftBy1(int *arr, int size)
{
    int lastEle = arr[size - 1];
    for (int i = size - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = lastEle;
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
    shiftBy1(arr, size);
    display(arr, size);
}