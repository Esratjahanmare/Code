#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, m=0;
    cin>>n>>l;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]>m)
            m=a[i+1]-a[i];
    }
    double x=a[0];
    double y=(double)m/2;
    double z=max(x,y);
    double s=l - a[n-1];
    double ans=max(z,s);

    cout<<fixed<<setprecision(10)<<ans<<endl;
}
