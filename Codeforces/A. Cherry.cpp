#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long ans=0;
        for(int i=0; i<n-1; i++)
        {
            ans=max(ans, a[i]*a[i+1]);
        }
        cout<<ans<<endl;
    }
}
