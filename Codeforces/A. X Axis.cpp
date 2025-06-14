#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        ll mx=max(a, max(b, c));
        ll mn=min(a, min(b,c));
        cout<<mx-mn<<endl;
    }
}
