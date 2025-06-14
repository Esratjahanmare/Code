#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        vector<int>v(n), v2(m);
        map<int, int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]=1;
        }
        for(int i=0; i<m; i++)
        {
            cin>>v2[i];
            if(mp[v2[i]]==1) mp[v2[i]]=5;
            else  if(mp[v2[i]]==0) mp[v2[i]]=2;
        }
        int a=k/2, b=k/2;
        for(int i=1; i<=k; i++)
        {
            if(mp[i]==1) a--;
            if(mp[i]==2) b--;
            if(mp[i]==0) a=-1;
        }
        if(a>=0 && b>=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
