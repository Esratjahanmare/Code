#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll fact(ll n) {
    ll ans = 1;
    for(int i = 2; i <= n; i++) {
        ans = (ans * i) % mod;
    }
    return ans % mod;
}

ll power(ll base, ll p) {
    ll ans = 1;
    while(p) {
        if(p % 2 == 1) {
            ans = (ans * base) % mod;
            p--;
        }
        else {
            base = (base * base) % mod;
            p /= 2;
        }
    }
    return ans % mod;
}

ll nCr(ll n1, ll r1, ll k) {
    ll ans = 1;
    ll ans1 = power(r1, mod - 2);
    ll ans2 = power(k, mod - 2);
    ans = (ans * ans1) % mod;
    ans = (ans * ans2) % mod;
    return ans % mod;
}

int main() {
    /*
    nCr = n!/ r!*(n-r)!;
    = (n1%mod)*((r1^mod-2)%mod) * ((k^mod-2)%mod)%mod;
    */
    ll n, r, n1, r1, k, ans;
    cin >> n >> r;
    n1 = fact(n);
    r1 = fact(r);
    k = fact(n - r);
    ans = nCr(n1, r1, k);
    cout << ans << endl;
    return 0;
}
