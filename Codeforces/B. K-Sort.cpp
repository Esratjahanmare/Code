#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >>t;
    while(t--)
    {
       ll n;
    cin>>n; ll a[n];
   ll ans = 0;
    ll mx = 0;
    ll times = 0;
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
      for (ll i = 1; i < n; i++)
    {
        if(a[i-1]>a[i])
        {
            times+=a[i-1]-a[i];
            mx=max(mx, a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<mx+times<<endl;
 }
    return 0;
}
