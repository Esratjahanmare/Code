#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n, ans, p;
        cin>>n;
        for(ll i=2; i<10e9; i++)
        {
            p=pow(2,i)-1;
            if(n%p==0){
                cout<<n/p<<endl;
                break;
            }
        }
    }
}
