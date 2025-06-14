#include<iostream>
using namespace std;

int main()
{
    long long a, b, c,mn, res=0;

    cin>>a>>b>>c;
    mn=min( a, min(b,c ));
    res+=mn;
    a-=mn;
    b-=mn;
    c-=mn;

    res+=min(a/2, c);

    cout<<res<<endl;

    return 0;
}
