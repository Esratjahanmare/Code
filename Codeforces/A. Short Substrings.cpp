#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s, t;
        cin>>s;
        for(int i=0; i<s.size()-1; i+=2)
        {
                t+=s[i];
        }
        t+=s[s.size()-1];
        cout<<t<<endl;
    }
}
