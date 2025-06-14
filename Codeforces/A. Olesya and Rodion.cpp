#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    string s="";
    if(n<2 && t>=10) cout<<-1<<endl;
    else if(n>=2 && t==10)
    {
        for(int i=0; i<n-1; i++)    s+=1+'0';
        s+=0+'0';
        cout<<s<<endl;
    }
    else
    {
        for(int i=0; i<n; i++) s+=t+'0';
        cout<<s<<endl;
    }

}
