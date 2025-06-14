#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, c, d, mn = LLONG_MAX; // Using LLONG_MAX for maximum value of long long
        cin >> n >> c >> d;
        ll k = n * n;
        ll a;
        map<ll, ll> mp;
        for (ll i = 0; i < k; i++) {
            cin >> a;
            mn = min(mn, a);
            mp[a]++;
        }

        ll first = mn, row_move;
        bool possible = true; // Flag to track if the progressive square is possible

        for (ll i = 0; i < n; i++) {
            first = mn + i * c;
            row_move = first;
            for (ll j = 0; j < n; j++) {
                if (mp[row_move] == 0) {
                    possible = false;
                    break;
                }
                mp[row_move]--;
                row_move += d; // Move to the next column
            }
            if (!possible) {
                cout << "NO" << endl;
                break;
            }
        }
        if (possible) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
