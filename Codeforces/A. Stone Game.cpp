#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int mx=a[0], mn=a[0];
        for(int i=0; i<n; i++)
        {
        if(a[i]>mx)
        {
            mx=i;
        }
        if(a[i]<mn)
        {
            mn=i;
        }
        }
        int pos1, pos2, mid=(n/2);
        if(mn<=mid && mx<=mid)
        {
            pos1=max(mn,mx);
            cout<<pos1<<endl;
        }
        else if(mn>=mid && mx>=mid)
        {
            pos1=max(mn,mx);
            cout<<pos1<<endl;
        }
        else if(mn>=mid && mx<=mid)
        {
            pos1=mn+mx;
            cout<<pos1<<endl;
        }
        else
        {
            pos1=mn+mx;
            cout<<pos1<<endl;
        }
    }
}
