#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        int m=b%3;
        if(m!=0 && m+c<3)
            cout<<-1<<endl;
        else
        {
            int ans=0;
            int n=(b+c);
            if(n%3!=0)
            {
                int x=(n/3)+1;
                ans=x+a;
            }
            else
                ans=a+n/3;

           cout<<ans<<endl;
        }
    }
}
