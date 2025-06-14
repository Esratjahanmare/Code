#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll a, b, x, y;
        cin>>a>>b>>x>>y;

        if((a>b &&x>y) || (a<b && x<y))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
