#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;

    bool ans =0;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]!='9')
            ans=1;
        if(s[i]=='9' && !ans)
            continue;
        if(s[i]>4){
            s[i]='9'-s[i]+'0';
        }
    }
    cout<<s<<endl;
}
