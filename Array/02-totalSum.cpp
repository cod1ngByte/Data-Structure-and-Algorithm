#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 1};
    int n = 4;
    int sum = 0;
    // int sum;  garbage value
    // cout << sum << endl;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
}