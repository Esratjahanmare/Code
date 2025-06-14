#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, m, n, o, p,q, x;
    cin>>a>>b>>c;

    m=a+b*c;
    n=(a+b)*c;
    o=a*b*c;
    p=a*(b+c);
    q=a+b+c;
    x=max(m,max(n, max(o,max(p,q))));

    cout<<x<<endl;

    return 0;

}
