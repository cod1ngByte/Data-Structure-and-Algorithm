#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
// l-643
double maxAvgSubarray(vector<int> &v, int k) // n
{
    int i = 0;
    int j = k - 1;
    int sum = 0;
    int maxSum = INT_MIN;
    for (int w = i; w <= j; w++)
    {
        sum = sum + v[w];
    }
    maxSum = max(sum, maxSum);
    j++;
    while (j < v.size())
    {
        sum = sum - v[i];
        i++;
        sum = sum + v[j];
        j++;
        maxSum = max(sum, maxSum);
    }

    double avg = maxSum / (double)k;
    return avg;
}