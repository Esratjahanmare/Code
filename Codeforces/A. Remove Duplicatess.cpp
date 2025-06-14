#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int u= unique(v.begin(), v.end())-v.begin();
    for(int i=0; i<u; i++)
    {
        cout<<v[i]<<" ";
    }


}
