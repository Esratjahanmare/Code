#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c,d=6;

    cin>>a>>b;

    c=max(a,b);
    c=(6+1)-c;

    if(c==6)
    {
        c/=6;
        d/=6;
    }
    else if(c==4)
    {
        c/=2;
        d/=2;
    }
    else if(c==2)
    {
        c/=2;
        d/=2;
    }
    else if(c==3)
    {
        c/=3;
        d/=3;
    }
    cout<<c<<"/"<<d<<endl;

}
