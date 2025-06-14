#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll a[n], b[n], mina = LLONG_MAX, minb = LLONG_MAX;
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            mina = min(mina, a[i]);
        }
        for(ll i = 0; i < n; i++) {
            cin >> b[i];
            minb = min(minb, b[i]);
        }
        ll sum = 0;
        for(ll i = 0; i < n; i++) {
            sum += max(a[i] - mina, b[i] - minb);
        }
        cout << sum << endl;
    }
    return 0;
}
