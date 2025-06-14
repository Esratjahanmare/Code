#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int one=count(s.begin(), s.end(), '1');
        int zero=count(s.begin(), s.end(), '0');
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                if(zero>0) zero--;
                else break;
            }
            else
                {
                if(one>0) one--;
                else break;
            }
        }
        cout<<zero+one<<endl;
    }
}
