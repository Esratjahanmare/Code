#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int d=s.size();
        int a=(d/2);
        if(d%2!=0) cout<<"NO"<<endl;
        else
        {
            string c, b;
        for(int i=0; i<a; i++)
        {
            c+=s[i];
        }
        for(int i=a; i<s.size(); i++)
        {
            b+=s[i];
        }
            if(c==b)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }

        }
    }

