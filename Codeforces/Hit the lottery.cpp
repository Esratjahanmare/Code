#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d, e, f, g, h,i,ans=0;

    cin>>n;

    a=n/100;
    b=n%100;
    c=b/20;
    d=b%20;
    e=d/10;
    f=d%10;
    g=f/5;
    h=f%5;
    i=h/1;

    ans=a+c+e+g+i;

    cout<<ans<<endl;
}
