#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, n, mm, mn;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        mm=max(a,max(b,c));
        mn=min(a, min(b,c));
        if((a!=mm && a!=mn))
            cout<<a<<endl;
        else  if(b!=mm && b!=mn)
            cout<<b<<endl;
             else
            cout<<c<<endl;
    }
}
