#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i, n;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        a[0]=a[0]+1;

        int ans=1;
        for(int i=0; i<n; i++)
        {
            ans*=a[i];
        }
        cout<<ans<<endl;
    }
}
