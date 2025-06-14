#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        int total=0, flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='(') flag++;
            else flag--;
            if(flag<0) {total++;
            flag=0;}
        }
        cout<<total<<endl;
    }
}
