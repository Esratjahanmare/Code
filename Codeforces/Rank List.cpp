#include<bits/stdc++.h>
using namespace std;

//#define optimize() ios_base: :sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool cmp(const pair<int, int>&p1,const pair<int, int>&p2 )
{
    if(p1.first > p2.first) return 1;
    else if(p1.first==p2.first)  return(p1.second < p2.second);
        return 0;
}


int main()
{
    //optimize();
    // vector<pair<int, int>>v;
     int n, x;
     cin>>n>>x;
     vector<pair<int, int>>v(n);
     for(int i=0; i<n; i++)
     {
         cin>>v[i].first>>v[i].second;
     }
     sort(v.begin(), v.end(), cmp);
     int ans=0;
     for(auto u : v)
     {
         if(u==v[x-1])
            ans++;
     }
     cout<<ans<<endl;
}
