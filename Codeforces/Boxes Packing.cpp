#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    map<int, int>fre;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        fre[a[i]]++;
    }
    int ans=0;
    for(int i=0; i<n; i++)
    {
      ans=max(ans, fre[a[i]]);
    }
    cout<<ans<<endl;
}
