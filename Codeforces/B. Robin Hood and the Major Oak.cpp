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
        ll n, k;
        cin>>n>>k;
        ll x=k/2;
        if(n%2 && k%2){
            x++;
        }
        (x%2==0)? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}
