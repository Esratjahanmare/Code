#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n;
        ll a[n];
        ll ans=0;
        for(ll i=0; i<n; i++) {
            cin>>a[i];
           ans+=a[i];
        }

       cout<<ans-2*a[n-2]<<endl;

    }
}

