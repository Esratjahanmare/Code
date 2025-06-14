#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, t;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>t;
        if(t%2==0)
        {
            cout<<"2";
        }
        else
        {
            cout<<"1";
        }
    }
}
