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
        for(int i=1; i<n; i++)
        {
            cin>>a[i];
        }
        int x=10000;
        cout<<x<<" ";
        for(int i=1; i<n; i++)
        {
            x=x+a[i];
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
