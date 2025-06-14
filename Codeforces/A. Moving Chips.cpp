#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,d,e;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]==1)
            {
                d=i;
                break;
            }
        }
        for(int j=n; j>=0; j--)
        {
            if(a[j]==1)
            {
                e=j;
                break;
            }
        }
        for(int i=d; i<=e; i++)
        {
            if(a[i]==0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

