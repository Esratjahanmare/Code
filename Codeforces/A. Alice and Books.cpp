
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m=0; cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++) cin>>a[i];
        ll ans=a[n-1];
        for(ll i=0; i<n-1; i++){
                if(a[i]>m)
                    m=a[i];
        }
        ans+=m;
        cout<<ans<<endl;
    }
}
