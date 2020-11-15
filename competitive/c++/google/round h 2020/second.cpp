#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int u, l;

bool isEven(int n)
{
    // n&1 is 1, then odd, else even 
    return (!(n & 1));
}

int count_digit(int number)
{
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}

void solve()
{
    cin >> l >> u;
    int count = 0;

    for (int i = l; i <= u; ++i)
    {
        int j = count_digit(i);
        int n = i;
        while (n > 0)
        {
            int digit = n % 10;
            n /= 10;
            //print digit
            if (isEven(j) == isEven(digit) && j == 1)
            {
                ++count;
                break;
            }
            else if (isEven(j) != isEven(digit))
            {
                break;
            }
            --j;
        }
    }

    int ans;
    cout << count << "\n";
}

int main()
{

    int t, i = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << i << ": ";
        solve();
        ++i;
    }
}