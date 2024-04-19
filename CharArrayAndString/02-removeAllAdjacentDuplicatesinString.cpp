#include <iostream>
using namespace std;
// LC-1047
string removeDuplicate(string str)
{
    string ans = "";
    int i = 0;
    while (i < str.length())
    {
        if (ans.length() > 0 && str[i] == ans.back())
        {
            ans.pop_back(); // if ans is "" then ans.back() will give ""
        }
        else
        {
            ans.push_back(str[i]);
        }
        i++;
    }
    return ans;
}

int main()
{
    string str = "abbaca";
    string s = "";
    // cout << s.back();
    // cout << str.back();
    cout << removeDuplicate(str);
}