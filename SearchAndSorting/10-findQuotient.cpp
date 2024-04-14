#include <iostream>
using namespace std;

// divisor * quotient + remainder = dividend
// divisor * quotient <= dividend
// search space  -> 1 to dividend
int getQuotient(int divisor, int dividend)
{
    int s = 1;
    int e = dividend;
    int mid = s + (e - s) / 2; // quotient
    int ans = -1;
    while (s <= e)
    {
        if (divisor * mid == dividend)
        {
            return mid;
        }
        else if (divisor * mid < dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int divisor = 7;   // 1
    int dividend = 29; // 35
    int ans = getQuotient(divisor, dividend);
    if (divisor < 0 && dividend > 0 || divisor > 0 && dividend < 0)
    {
        ans = 0 - ans;
    }
    cout << ans << endl;
}