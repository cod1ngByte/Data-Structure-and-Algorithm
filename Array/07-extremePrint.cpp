#include <iostream>
using namespace std;

void extreme(int *arr, int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (left == right) // for last element in odd array
        {
            cout << arr[left] << endl;
        }
        else
        {
            cout << arr[left] << endl;
            cout << arr[right] << endl;
        }
        left++;
        right--;
    }
}

// void display(int *arr, int size)
// {
// }
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    extreme(arr, size);
    // display(arr, size);
}