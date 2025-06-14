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
        cin>>n>>k;
        ll a[n];
        ll sum=0, ans=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>=k) sum+=a[i];
            else if(a[i]==0 && sum>0)
           {
               sum--;
               ans++;
           }
        }
        cout<<ans<<endl;
    }
}
