#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;

        while (x >= y && k > 0) {
        ll t = min(k, y - x % y);
        k -= t;
        x += t;
        while (x % y == 0) {
            x /= y;
        }
    }

    if (x < y) {
        x = (x - 1 + k) % (y - 1) + 1;
    }
        cout << x << endl;
    }

    return 0;
}
