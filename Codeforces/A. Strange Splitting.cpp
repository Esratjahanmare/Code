#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++) cin>>a[i];
        if(a[0]==a[n-1]) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(a[1]==a[n-1])
            {
                cout<<"BB";
                for(ll i=2; i<n; i++)
                    cout<<"R";
            }
            else
            {
                cout<<"B";;
                for(ll i=1; i<n; i++)
                    cout<<"R";
            }

            cout<<endl;
        }
    }
}
