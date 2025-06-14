#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, sum=0;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>=0)
        cout<<sum<<endl;
    else
        cout<<sum*(-1)<<endl;
}
