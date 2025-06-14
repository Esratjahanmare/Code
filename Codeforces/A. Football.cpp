#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n, m=0;
    cin>>n;
    map<string, int>mp;
    while(n--)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    string ans;
    for(auto u: mp)
    {
      if(u.second>m)
      {
          m=u.second;
          ans=u.first;
      }
    }
    cout<<ans<<endl;
}
