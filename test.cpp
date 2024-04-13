#include <iostream>
#include <vector>
using namespace std;

double maxSubArray(vector<int> &arr, int k)
{
    int i = 0;
    int j = k - 1;
    int maxSum = -1;
    int sum = 0;
    for (int v = i; v <= j; v++)
    {
        sum = sum + arr[v];
    }
    maxSum = sum;
    j++;
    while (j < arr.size())
    {
        sum = sum - arr[i];
        i++;
        sum = sum + arr[j];
        j++;
        maxSum = max(sum, maxSum);
    }

    double avg = maxSum / (double)k;
    return avg;
}