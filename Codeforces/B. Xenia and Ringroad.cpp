#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    long long sum=a[0]-1;
    for(int i=0; i<m-1; i++)
    {
        if(a[i+1]<a[i])
            sum+=n-(a[i]-a[i+1]);
        else
            sum+=a[i+1]-a[i];
    }
    cout<<sum<<endl;
}
