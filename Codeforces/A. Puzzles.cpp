#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, px, ans,s=0;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    s=a[n-1]-a[0];
    for(int i=n; i<=m; i++)
    {
        px=a[i-1]-a[i-n];
        ans=abs(px);
        s=min(s,ans);

    }
    cout<<s<<endl;
}
