#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n, f, a, b, ans=0, mini=LONG_MAX;
        cin>>n>>f>>a>>b;
        ll ar[n];
        for(ll i=0; i<n; i++) cin>>ar[i];

        for(int i=0; i<n; i++)
        {
           mini=min(b, abs(ans-ar[i])*a);
           f-=mini;
           ans=ar[i];
        }
        if(f>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
