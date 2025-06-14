#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long moves = 0;
        while (n != 1)
        {
            if (n % 3 == 0)
            {
                if (n % 6 == 0)
                {
                    n /= 6;
                }
                else
                {
                    n *= 2;
                }
                moves++;
            }
            else
            {
                moves = -1;
                break;
            }
        }
        cout << moves << endl;
    }
    return 0;
}
