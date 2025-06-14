#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x, y, z, k;
        cin >> x >> y >> z >> k;

        ll ans = 0;
        for (ll i = 1; i <= x; i++) {
            for (ll j = 1; j <= y; j++) {
                if((i*j)>k) continue;
                if (k % (i * j) != 0)continue;
                    ll Z = k / (i * j);
                    if (Z >z) continue;
                        ll c = ( (x - i + 1LL)) * ( (y - j + 1LL)) * ( (z - Z + 1LL));
                        ans = max(ans, c);
                    }
        }
        cout << ans << endl;
    }
    return 0;
}
