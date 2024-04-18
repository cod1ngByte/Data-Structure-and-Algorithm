#include <iostream>
#include <string.h>
using namespace std;

// find length(#f character before '\0') of string in char[]
/*
int main(){
    char ch[10];
    cin >> ch;
    int i = 0;
    int len = 0;
    while(ch[i] != '\0'){
        i++;
        len++;
    }
    cout << "length of string in char array : " << len << endl;
}
we can also use strlen(ch) to find the lenght of string
*/

//----------------------reverse a string--------------------------
/*
void reverseString(char ch[], int len)
{ // in c++ array is passed by reference so any changes in array will effect the original array
    int start = 0;
    int end = len - 1;

    while (start <= end)
    {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
}

int main()
{
    char ch[50];
    cin.getline(ch, 50);
    int len = strlen(ch); // before '\0'
    // cout << ch << endl;
    reverseString(ch, len);
    // int i = 0;
    // while (ch[i] != '\0')
    // {
    //     cout << ch[i];
    //     i++;
    // }
    cout << endl;
    cout << ch << endl;
}
*/

//-------------------------string is pallindrome or not--------------------------
/*
bool reverseString(char ch[], int len)
{
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        if (ch[start] == ch[end])
        {
            start++;
            end--;
        }

        else
        {
            return false;
        }
    }
    return true; // out of while loop means they are pallindrome
}

int main()
{
    char ch[50];
    cin.getline(ch, 50);
    int len = strlen(ch);
    cout << reverseString(ch, len) << endl;
}
*/

//----------------------------convert to uppercase------------------------------

void upperCase(char ch[], int len)
{

    int i = 0;
    for (int i = 0; i < len; i++)
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')
        { // if character is lower case then convert
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
}
int main()
{
    char ch[50];
    cin.getline(ch, 50);

    int len = strlen(ch);

    upperCase(ch, len);
    cout << ch;
}