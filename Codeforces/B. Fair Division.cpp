#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int even=0;
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0) even++;
            sum+=a[i];
        }
        if(n==even && n%2!=0)
            cout<<"NO"<<endl;
        else if(sum%2!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
