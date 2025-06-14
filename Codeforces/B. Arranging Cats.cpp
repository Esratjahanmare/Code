#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,a=0, b=0, cnt=0;
        cin>>n;
        string s, s1;
        cin>>s>>s1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')  a++;
                if(s1[i]=='1')  b++;
               if(s1[i]!=s[i] && s1[i]=='1')  cnt++;
        }
        int ans=cnt;
        if(a>b) ans+=(a-b);
        cout<<ans<<endl;
    }
}
