#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, l,cnt=0;
    string s;
    cin>>n;
    cin>>s;

        for(i=0;i<n; i++)
       {
           s[i]=tolower(s[i]);
       }
       sort(s.begin(), s.end());
     for(i=0;i<n; i++)
       {
           if(s[i]!=s[i+1])
           {
               cnt++;
           }
       }
    if(cnt==26)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
}
