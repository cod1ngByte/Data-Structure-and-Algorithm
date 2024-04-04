#include <iostream>
using namespace std;

void reverseArray(int *arr, int size)
{

    int left = 0;         // leftmost index in an array or first array element index
    int right = size - 1; // rightmost index in an array or last element index
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    reverseArray(arr, size);
    // print array element in reverse
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}