#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;

        if(a==b && b!=c)
        {
            cout<<c<<endl;
        }
        else if(a==c && b!=c)
        {
            cout<<b<<endl;
        }
        else  if(c==b && a!=c)
        {
            cout<<a<<endl;
        }
    }
}
