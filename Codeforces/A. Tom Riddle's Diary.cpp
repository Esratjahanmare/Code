#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    map<string, bool>mp;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(mp[s]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        mp[s]=1;
    }

}
