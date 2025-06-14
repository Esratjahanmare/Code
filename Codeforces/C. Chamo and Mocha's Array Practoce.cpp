#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        vector<ll> prefixSum(n);
        prefixSum[0] = a[0];
        for (ll i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + a[i];
        }

        ll goodPrefixes = 0;
        for (ll i = 0; i < n; i++) {
            // Check if a[i] is equal to the sum of all previous elements
            // For prefixSum[i] to be good, a[i] should be equal to prefixSum[i-1]
            if (i == 0) {
                if (a[i] == 0) goodPrefixes++;
            } else {
                if (a[i] == prefixSum[i - 1]) goodPrefixes++;
            }
        }

        cout << goodPrefixes << endl;
    }

    return 0;
}
