#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
       int a= s[0]-'0';
       int b=s[1]-'0';
       int c=s[2]-'0';
       int d=s[3]-'0';

       if(a==0) a=10;
       if(b==0) b=10;
       if(c==0) c=10;
       if(d==0) d=10;
       int ans=abs(1-a)+1;
       ans+=abs(a-b)+1;
       ans+=abs(b-c)+1;
       ans+=abs(c-d)+1;
       cout<<ans<<endl;
    }
}
