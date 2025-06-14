#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]=i;
    }

    vector<int>ans;
    for(int i=0; i<n; i++)
    {
        if(mp[v[i]]==i)
            ans.push_back(v[i]);
    }

    cout<<ans.size()<<endl;
    for(auto u:ans)
    {
        cout<<u<<" ";
    }
    cout<<endl;
}
