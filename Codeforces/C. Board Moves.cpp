#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll moves = 0;
        for (ll i = 1; i <= n / 2; ++i) {
            moves += 8 * i * i;
        }
        cout << moves <<endl;
    }
    return 0;
}

