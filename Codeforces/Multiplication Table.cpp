#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;

    int count = 0;

    for (int i = 1; i <= n; ++i)
    {
        // Check if x is divisible by the current row number
        if (x % i == 0 && x / i <= n)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
