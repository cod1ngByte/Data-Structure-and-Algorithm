#include <iostream>
#include <vector>
using namespace std;

void fun(int *arr)
{
    arr[1] = 200;
    cout << arr[1];
}

int main()
{

    int arr[] = {10, 20, 30, 40};

    cout << arr[1];

    fun(arr);
    cout << arr[1];
}