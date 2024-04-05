#include <iostream>
using namespace std;

void negativeElementOnLeftside(int arr[], int size)
{

    int left = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[left]);
            left++;
        }
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {23, -7, 12, -10, -11, 40, 60};
    int size = 7;
    negativeElementOnLeftside(arr, size);
    display(arr, size);
}