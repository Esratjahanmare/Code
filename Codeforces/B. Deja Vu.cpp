#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, qu, q;
        cin>>n>>q;
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
            cin>>v[i];

        vector<ll>v2;
        for(ll i=0; i<q; i++){
            cin>>qu;
            if(v2.empty() || v2.back()>qu)
                v2.push_back(qu);
        }

        for(int i=0; i<n; i++)
        {
            for(auto it: v2)
            {
                if(v[i]%(1<<it)==0)
                {
                    it=it-1;
                    v[i]+=(1<<it);
                }
            }
        }
        for(auto it: v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
