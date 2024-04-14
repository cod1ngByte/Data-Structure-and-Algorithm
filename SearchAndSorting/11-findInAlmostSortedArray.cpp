#include <iostream>
#include <vector>
using namespace std;

int almostBinarySearch(vector<int> &arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid] == target)
        {
            return mid;
        }
        if (mid + 1 < arr.size() && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (target > arr[mid])
        {
            s = mid + 2;
        }
        else
        {
            e = mid - 2;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {20, 10, 30, 50, 40, 70, 60};
    int target = 20;
    int targetIndex = almostBinarySearch(arr, target);
    cout << targetIndex << endl;
}