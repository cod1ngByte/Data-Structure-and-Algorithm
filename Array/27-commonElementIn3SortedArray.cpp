#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> commonElements(int a[], int b[], int c[], int n1, int n2, int n3)
//  O(n1 + n2 + n3)
// space -> min of (n1, n2, n3)
{
    vector<int> ans;
    set<int> st;
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] == c[k])
        {
            // ans.push_back(a[i]);
            st.insert(a[i]); // repeated elements will not be stored again in set
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else // c array element is smaller than a and b array element
        {
            k++;
        }
    }
    // set to vector
    for (auto val : st)
    {
        ans.push_back(val);
    }
    // return vector
    return ans;
}