#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a, b, x, y;
        cin>>x>>y;//1 3
        cin>>a>>b;//391 555
        long long mn=min(x,y);
        long long mx=max(x,y);
        long long m=mx-mn;
        long long ans=0;

        if(2*a<b)
        {
            ans+=2*a*mn;
            ans+=m*a;
        }
        else
        {
            ans+=b*mn;
            ans+=m*a;
        }
        cout<<ans<<endl;
    }
}
