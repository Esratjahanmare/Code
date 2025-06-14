#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        map<char, int>mp;
        bool ans=true;
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
            char z=s[i];
            while(s[i]==z)
            {
                i++;
            }
            i--;
            if(mp[s[i]]>1){
                ans=false;}
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
