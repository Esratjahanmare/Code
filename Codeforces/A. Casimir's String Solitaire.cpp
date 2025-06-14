#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        int cnt=0, con=0, coun=0;
        cin>>s;
        for( int i=0; s[i]!='\0'; i++)
        {
            if(s[i]=='A')
                cnt++;
           if (s[i]=='B')
                con++;
           if(s[i]=='C')
                coun++;
        }
        if((cnt+coun)==con)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
