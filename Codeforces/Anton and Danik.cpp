#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i=0, cnt=0, cnt2=0,n;

    cin>>n>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='A')
            cnt++;
        else if(s[i]=='D')
            cnt2++;
    }
    if(cnt>cnt2)
        cout<<"Anton"<<endl;
    else if(cnt2>cnt)
         cout<<"Danik"<<endl;
    else
         cout<<"Friendship"<<endl;
    return 0;
}
