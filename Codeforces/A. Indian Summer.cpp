#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<pair<string,string>>vp(n);
  for(int i=0; i<n; i++)
  {
      cin>>vp[i].first>>vp[i].second;
  }
  sort(vp.begin(), vp.end());
  int sz=unique(vp.begin(), vp.end())-vp.begin();
  cout<<sz<<endl;
}
