#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long n; cin>>n; long long a[n];
       for(long long i=0; i<n; i++)
       {
           cin>>a[i];
       }
       for(long long i=1; i<n-1; i++)
       {
           if(a[i-1]>=0)
           {
               a[i]=a[i]-2*a[i-1];
               a[i+1]=a[i+1]-a[i-1];
               a[i-1]=0;
           }
           else
           {
               break;
           }
       }
       bool flag=true;
       for(long long i=0; i<n; i++)
       {
           if(a[i]!=0)
           {
               flag = false;
               break;
           }
       }
       if(flag) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}
