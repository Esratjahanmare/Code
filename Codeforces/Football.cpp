#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int  cnt=0, co=0,c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1' )
            {cnt++;
            co=0;}
        else
            {co++;
            cnt=0;}
        if(cnt==7 || co==7)
            c=1;
    }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
