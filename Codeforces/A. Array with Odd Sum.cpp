#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, i, sum=0;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0, even=0, odd=0;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
            sum+=a[i];
        }
        if(sum%2!=0)
            cout<<"YES"<<endl;
        else
        {
            if(even!=0 && odd!=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
