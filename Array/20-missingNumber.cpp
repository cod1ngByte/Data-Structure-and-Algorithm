#include <iostream>
#include <vector>
using namespace std;

// leetcode - 268
/*
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
*/

// using xor  all index xor ^ all element xor (b ^ b = 0 )(0 ^ b = b) = missing element

int xorr(vector<int> &v)
{
    int ans = 0;
    // xor all values of array
    for (int i = 0; i < v.size(); i++)
    {
        ans = ans ^ v[i];
    }
    // xor all range items
    int n = v.size();
    for (int i = 0; i <= n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int missElement(vector<int> &nums)
{
    return xorr(nums);
}
