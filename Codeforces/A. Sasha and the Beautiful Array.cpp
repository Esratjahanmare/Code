#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int i,p, mx, mn, ans=0, n;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        ans=a[n-1]-a[0];
        cout<<ans<<endl;
    }
}
