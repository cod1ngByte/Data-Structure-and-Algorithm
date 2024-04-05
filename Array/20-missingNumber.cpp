#include <iostream>
#include <vector>
using namespace std;

// leetcode - 268

int missingNumber(vector<int> &arr)
{
    int n = arr.size();
    int totalSum = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int missingElement = totalSum - sum;
    return missingElement;
}