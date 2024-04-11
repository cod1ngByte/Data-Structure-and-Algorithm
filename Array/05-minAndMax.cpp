#include <iostream>
#include <limits.h>
using namespace std;

void minMax(int *arr, int size)
{

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << " min value : " << min << endl;
    cout << " max value : " << max << endl;
}

int main()
{
    int arr[] = {20, 4, 15, 2, 6, 8, 11};
    int size = 7;
    minMax(arr, size);
}