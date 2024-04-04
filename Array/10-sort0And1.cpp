#include <iostream>
using namespace std;

void sortZeroAndOne(int *arr, int size)
{
    int left = 0; // left index will keep track of all
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[left], arr[i]);
            left++;
        }
    }
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
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1};
    int size = 12;
    sortZeroAndOne(arr, size);
    display(arr, size);
}