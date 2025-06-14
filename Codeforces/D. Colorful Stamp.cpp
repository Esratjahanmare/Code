#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, cnt=0;
        cin>>n;
        string s;
        cin>>s;
        bool ans=true;

        for(int i=0; i<n; i++)
        {
           if(s[i]!='W' )
            {
                int b=0, r=0;
                while( i<n && s[i]!='W' )
                {
                    if(s[i]=='R') r++;
                    else b++;
                    i++;
                }
                if(r==0 || b==0)
                {
                    ans=false;
                    break;
                }
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
