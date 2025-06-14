#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, t;
    double p,q;
    cin>>n>>t;
    int a[n];
    p=((double)n/t);
    q=ceil(p);

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    for(i=0; i<q; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
