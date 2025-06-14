#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string s; cin>>s;

        set<char>st;
        for(ll i=0; i<n; i++) st.insert(s[i]);

        map<char, char>mp;
        auto rit=st.rbegin();
        for(auto it=st.begin(); it!=st.end(); it++){
            mp[*it]=*rit;
            rit++;
        }

        for(ll i=0; i<n; i++)
            cout<<mp[s[i]];
        cout<<endl;
    }
}
