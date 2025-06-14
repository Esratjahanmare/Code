#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cn0=0, cn1=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                cn0++;
            else
                cn1++;
        }
        if(cn0!=cn1) cout<<min(cn0, cn1)<<endl;
        else
            cout<<cn1-1<<endl;
    }
}
