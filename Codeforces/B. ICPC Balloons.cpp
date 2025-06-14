#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n, sum=0; cin>>n;
        string s; cin>>s;
        map<char, int>mp;
        for(int i=0; i<s.size(); i++)
        {
            if(mp[s[i]]==0)
                sum+=2;
            else sum+=1;
            mp[s[i]]++;
        }
        cout<<sum<<endl;
    }
}
