#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, m1, m2, M1, M2;

    cin>>t;
     while(t--)
    {
        cin>>a>>b>>c>>d;
        M1=max(a,b);
        m1=min(a,b);
        M2=max(c,d);
        m2=min(c,d);
        if(m1>M2 || m2>M1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
