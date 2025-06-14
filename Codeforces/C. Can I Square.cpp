#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n, sum=0; cin>>n;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        double s=sqrt((double)sum);
        long long p=sqrt(sum);
        if(s==p)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
