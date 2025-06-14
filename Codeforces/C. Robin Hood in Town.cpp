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
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
             sum+=a[i];
        }
        if(n<=2){
            cout<<-1<<endl;
        }
        else{
        sort(a, a+n);
        ll ans=a[n/2]*2*n+1;
        if(sum>=ans)
            cout<<0<<endl;
        else
        cout<<ans-sum<<endl;
        }
    }
}
