#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n; int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a, a+n);
        int d=a[0];
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=a[i]-d;
        }
        cout<<sum<<endl;
    }
}
