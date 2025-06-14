#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, m=0, mi=101, maxi, mini;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>m)
        {
            m=a[i];
            maxi=i;
        }
        if(a[i]<=mi)
        {
            mi=a[i];
            mini=i;
        }
    }

    if(maxi>mini)
    {
        mini++;
    }
    cout<<maxi+(n-1)-mini;
}
