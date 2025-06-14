#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll sum=0;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=n; j++)
                sum+=max(i,j);
        }
        cout<<sum<<" "<<2*n-1<<endl;
        for(ll i=1; i<=n; i++){
            cout<<1<<" "<<i<<" ";
            for(ll j=n; j>=1; j--)
                cout<<j<<" ";
        cout<<endl;

        cout<<2<<" "<<i<<" ";
            for(ll j=n; j>=1; j--)
                cout<<j<<" ";
        cout<<endl;
        }
    }
}
