#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i, j,  a=0;

    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        for(j=i+1; j<s.size(); j++)
        {
            if(s[i]==s[j])
            {
               a++;
               break;
            }
        }
    }
    int  v=s.length()-a;
    if(v%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}
