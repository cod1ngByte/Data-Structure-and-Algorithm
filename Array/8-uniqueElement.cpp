#include <iostream>
using namespace std;

int getUnique(int *arr, int size)
{
    // 0 ^ anyNum = anyNum
    // anyNum ^ anyNum = 0
    int uniqueElement = 0;
    for (int i = 0; i < size; i++)
    {
        uniqueElement = uniqueElement ^ arr[i];
    }
    return uniqueElement;
}

int main()
{
    int arr[] = {2, 10, 11, 10, 2, 14, 15, 14, 15};
    int size = 9;
    int uniqueEle = getUnique(arr, size);
    cout << uniqueEle << endl;
}