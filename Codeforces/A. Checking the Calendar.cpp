#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1>>s2;

    if( s1 =="sunday" && (s2=="sunday" || s2=="wednesday" || s2=="tuesday" ))
        cout<<"YES"<<endl;
    else if(s1 =="monday" && (s2=="monday" || s2=="wednesday" || s2=="thursday" ))
        cout<<"YES"<<endl;
    else if(s1 =="tuesday" && (s2=="tuesday" || s2=="friday" || s2=="thursday" ))
    cout<<"YES"<<endl;
        else if(s1 =="wednesday" && (s2=="wednesday" || s2=="friday" || s2=="saturday" ))
        cout<<"YES"<<endl;
    else if(s1 =="thursday" && (s2=="thursday" || s2=="saturday" || s2=="sunday" ))
        cout<<"YES"<<endl;
    else if(s1 =="friday" && (s2=="friday" || s2=="sunday" || s2=="monday" ))
        cout<<"YES"<<endl;
    else if(s1 =="saturday" && (s2=="saturday" || s2=="monday" || s2=="tuesday" ))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
