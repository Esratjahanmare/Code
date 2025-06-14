#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d, mx=0;
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]<=10)
                {
                    if(b[i]>mx)
                    {
                        mx=b[i];
                        d=i+1;
                    }
                }
        }
        cout<<d<<endl;
    }
}
