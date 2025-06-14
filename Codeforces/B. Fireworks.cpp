#include<bits/stdc++.h>
# define ll long long
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
    ll a, b, m;
    cin>>a>>b>>m;
    ll ans=(m/a+1)+ (m/b+1);
    cout<<ans<<endl;
    }
}
