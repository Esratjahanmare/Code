#include<bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(ll l, ll r)
{
    if(r==0) return l;
    return gcd(r, l%r);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l, r;
        cin>>l>>r;
        if(r%l==0)
            cout<<r*r/l<<endl;
        else{
        //gcd(l, r);
        ll ans=(l*r)/gcd(l, r);
        cout<<ans<<endl;
        }
    }
}
