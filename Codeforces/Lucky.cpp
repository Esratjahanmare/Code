#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d, e, f, sum=0, sum2=0;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e>>f;

        sum=a+b+c;
        sum2=d+e+f;

        if(sum==sum2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
