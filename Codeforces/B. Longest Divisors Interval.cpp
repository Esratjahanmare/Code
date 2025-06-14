#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll n)
{
    ll cnt=0, mx=0;
    for(int i=1; i<=1000; i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
        else break;
        mx=max(mx, cnt);
    }
    cout<<mx<<endl;
}
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        solve(n);
    }
}
