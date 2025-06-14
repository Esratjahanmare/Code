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
        if(n==1)
            cout<<1<<endl;
        else
            cout<<(n-1)*k+1<<endl;
    }
}
