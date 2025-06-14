#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>a(n);
        for(ll i=0; i<n; i++) cin>>a[i];

         vector<ll>ans(n);
        for(ll i=0; i<n-1; i++)
            ans.push_back(min(a[i], a[i+1]));
        for(ll i=0; i<n-2; i++)
            ans.push_back(min(a[i], a[i+2]));

        ll sl=*max_element(ans.begin(), ans.end());
        cout<<sl<<endl;
    }
}
