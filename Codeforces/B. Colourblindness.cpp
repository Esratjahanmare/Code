#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string s2; cin>>s2;
        bool ans=true;

        for(int i=0; i<n; i++)
        {
            if((s[i] =='G' && s2[i]=='R') || (s[i] =='B' && s2[i]=='R') || (s[i] =='R' && s2[i]=='G') || (s[i] =='R' && s2[i]=='B') )
                ans=false;
        }
        if(ans) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
}
