#include<bits/stdc++.h>
#define v(x) x.begin(), x.end()
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];
            sort(v(a));
        ll x=(n-1)/2;
        ll count =0;
        for(int i=x; i<n; i++)
        {
            if(a[i]==a[x])
                count++;
        }
        cout<<count<<endl;
    }
}
