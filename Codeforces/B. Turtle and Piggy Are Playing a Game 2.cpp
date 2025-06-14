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
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++) cin>>a[i];

        sort(a,a+n);
 	   ll d = n / 2;
 	   cout << a[d] << endl;
    }
}

