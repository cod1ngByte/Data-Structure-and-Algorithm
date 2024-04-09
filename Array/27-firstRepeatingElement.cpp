// gfg
// return first repeating element from left to right and index is 1 based

/*
int firstRepeatingElement(int arr[], int size) // O(n*n)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return i + 1; // index is 1 based so i+1
            }
        }
    }
    return -1;
}
*/
#include <iostream>
#include <unordered_map>
using namespace std;
int firstRepeatingElement(int arr[], int size) // O(n)  and space -> O(n)
{
    unordered_map<int, int> mp; // key -> arr[i], value -> count++

    for (int i = 0; i < size; i++)
    {
        mp[arr[i]]++;
    }

    // check if count is more than 1
    for (int i = 0; i < size; i++)
    {
        if (mp[arr[i]] > 1)
        {
            return i + 1; // index is 1 based;
        }
    }
    return -1;
}