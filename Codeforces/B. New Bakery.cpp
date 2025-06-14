#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, a, b;
        cin >> n >> a >> b;
        ll ans = 0;
        if (a>=b) ans=n*a;
        else{
            ll cnt = b-a;
            if (cnt<=n) {
                ans = (b*cnt)-(cnt*(cnt-1))/2;
                n=n-cnt;
                ans+=n*a;
            }
         else {
                cnt=n;
            ans =  (b*cnt)-(cnt*(cnt-1))/2;
        }
    }
        cout << ans << endl;
    }

    return 0;
}
