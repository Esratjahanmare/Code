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
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a, a+n);
        int count=0;
        for(int i=1; i<n; i++)
        {
            if(a[i]-a[i-1]>1)
            {
                count=1;
                break;
            }
        }
        if(count ==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
