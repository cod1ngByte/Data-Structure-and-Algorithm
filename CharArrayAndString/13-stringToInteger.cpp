#include <iostream>
#include <limits.h>
using namespace std;

// LC -8

int myAtoi(string str)
{
    int num = 0;
    int i = 0;
    int sign = 1; //+ve
    while (str[i] == ' ')
    {
        i++;
    }
    if (i < str.size() && (str[i] == '-' || str[i] == '+'))
    {
        sign = str[i] == '+' ? 1 : -1;
        i++;
    }

    while (i < str.size() && isdigit(str[i]))
    {
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && str[i] > '7'))
        {
            return sign == -1 ? INT_MIN : INT_MAX;
        }
        num = num * 10 + str[i] - '0';
        i++;
    }
    return num * sign;
}