#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ll n; cin>>n;
   ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    ll q; cin>>q;
    while(q--)
    {
        ll x;  cin>>x;
        auto it=upper_bound(a, a+n, x);
        cout<<it-a<<endl;
    }
}
