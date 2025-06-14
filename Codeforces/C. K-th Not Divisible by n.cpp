#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll x=k/(n-1);
        if((k+x)%n==0)
            cout<<k+x-1<<endl;
        else
            cout<<k+x<<endl;
    }
}
