#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll a[n], b[n];
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) cin>>b[i];
        ll SA=0, SB=0;

        for(ll i=0; i<n; i++){
            if(a[i]>b[i]) SA+=a[i];
            else if(a[i]==b[i]) continue;
            else SB+=b[i];
        }
         for(ll i=0; i<n; i++){
                if(a[i]!=b[i]) continue;
         if(a[i]==-1){
            if(SA<SB) SB+=b[i];
            else SA+=a[i];
         }
         else{
            if(SA>SB) SB+=b[i];
            else SA+=a[i];
         }
        }
        cout<<min(SA, SB)<<endl;
    }
}

// “Goal-setting is powerful, partly because it provides focus.It shapes
// our dreams. It gives us the ability to hone in on the exact actions
//we need to perform to achieve everything we desire in life.” — Jim Rohn.
