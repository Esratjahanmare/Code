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
        } int sum=0, sum2=0;
        for(i=0; i<n; i++)
        {
            if(a[i]%2==0) sum+=a[i];
            else sum2+=a[i];
        }
        if(sum>sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
