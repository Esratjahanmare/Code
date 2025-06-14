#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        int cnt=0;
        cin>>a>>b>>c;
        int m=max(a,b);
        int n=min(a,b);
        if(m==n)
            cout<<0<<endl;
        else
        {
            while(m>=n)
            {
                n+=c;
                m-=c;
                cnt++;
                if(m<=n)
                    break;
            }

            cout<<cnt<<endl;
        }

    }
}
