#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
      ll n;
    cin >> n;
    ll a[n];
    ll maxi = -1;
    ll sum = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
     for (ll i = 0; i < n; i++) {
           sum += a[i];
        maxi = max(maxi, a[i]);

        if (sum-maxi==maxi) {
            ans++;
        }
    }
    cout << ans << endl;
    }
    return 0;
}
