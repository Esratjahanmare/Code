#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, x;
        cin>>n>>m;
        string s; cin>>s;
        set<ll>st;
        for(ll i=1; i<=m; i++) {
                cin>>x;
        st.insert(x);
        }

       string c; cin>>c;
       sort(c.begin(), c.end());
       int a=0;
       for(auto it: st){
        s[it-1]=c[a];
        a++;
       }
       cout<<s<<endl;
    }
}
