
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, x, y;
        cin >> n;
          int a[n+1], b[n+1];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < n + 1; i++) {
            cin >> b[i];
        }
        ll ans =1, cnt=INT_MAX;
        for(int i=0; i<n; i++)
        {
            x=min(a[i], b[i]);
            y=max(a[i], b[i]);
            if(x<=b[n] && b[n]<=y) cnt=0;
            cnt=min(cnt, abs(b[n]-x));
            cnt=min(cnt, abs(b[n]-y));
            ans+=y-x;
        }
        ans+=cnt;
        cout<<ans<<endl;
    }
    return 0;
}
