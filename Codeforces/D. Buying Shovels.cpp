#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll n, k;
        cin>>n>>k;
     ll x=n;
        for(ll i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(i<=k){
                    x=min(x, n/i);}
                    if(n/i<=k){
                        x=min(x,i);}
            }
        }
        cout<<x<<endl;
    }
}
