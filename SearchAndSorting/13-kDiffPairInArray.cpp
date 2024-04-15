#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

// LC-532

// O(n*n)
/*
int findPair(vector<int> &arr, int k){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if(abs(arr[i] - arr[j]) == k){
                count++;
            }
        }
    }
    return count;
}
*/

// sort and use two pointer algo
//(nlogn) + n => nLogn

int findUniquePair(vector<int> &arr, int k)
{
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = 1;
    set<pair<int, int>> st;
    while (j < arr.size())
    {
        if (arr[j] - arr[i] == k)
        { // array is sorted so arr[j] will always >= arr[i]
            st.insert({arr[i], arr[j]});
            i++;
            j++;
        }
        else if (arr[j] - arr[i] > k)
        {
            i++;
        }
        else
        { // diff < k
            j++;
        }
        if (i == j)
        { // in question pair is two diff element
            j++;
        }
    }

    // return unique pair count
    return st.size();
}