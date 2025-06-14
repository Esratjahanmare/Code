
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s,r;
        cin>>s;
        for(int i=1; i<s.size(); i++)
        {
            r+=s[i];
        }
        r+=s[0];

        if(s==r) cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl<<r<<endl;

    }
}
