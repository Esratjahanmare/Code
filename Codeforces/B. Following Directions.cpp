#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int cn1=0, cn2=0, flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='U') cn1+=1;
           else  if(s[i]=='D') cn1-=1;
           else if(s[i]=='R') cn2+=1;
           else if(s[i]=='L') cn2-=1;
           if(cn1==1 && cn2==1)
           {
             flag =1;
               break;
           }
        }
        if(flag!=0)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
}
