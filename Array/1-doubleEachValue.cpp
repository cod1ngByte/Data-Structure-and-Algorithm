#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }
    // value
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}