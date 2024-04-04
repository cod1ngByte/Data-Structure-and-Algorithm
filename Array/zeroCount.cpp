#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 1, 0, 0, 1, 1};
    int n = 8;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
    }
    cout << zeroCount << endl;
}