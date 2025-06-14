#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
       int mini=1000;
         for(i=1; i<n; i++)
        {
            mini=min(mini, a[i]-a[i-1]);
        }
        cout<<mini<<endl;
    }
}
