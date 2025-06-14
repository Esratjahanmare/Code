#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, k, b, i, t;
    cin>>t;

    while(t--)
    {
        cin>>a>>k;
        long long ans=1;
        for(i=1; i<=a; i++)
        {
            cin>>b;
            ans*=b;
        }
        if(2023%ans==0)
        {
            cout<<"YES"<<endl;
            cout<<2023/ans<<" ";
            for(i=1; i<k; i++)
            {
                cout<<"1"<<" ";
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
