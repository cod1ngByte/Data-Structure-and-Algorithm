#include <iostream>
#include <vector>
using namespace std;

// leetcode - 189
// circular use mod
void rotateArray(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> v(n);
    for (int i = 0; i < arr.size(); i++)
    {
        int newIndex = (i + k) % n;
        v[newIndex] = arr[i];
    }
    v = arr;
}