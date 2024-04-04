#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 5, 15, 0};
    int target = 10;
    // int target = 11; not in array
    int n = 8;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "found at " << i << " index " << endl;
            flag = 1;
            break; // out of the loop if element found in an array
        }
    }
    if (flag == 0)
    {
        cout << "element is not present in array " << endl;
    }
}