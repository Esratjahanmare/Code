#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a, b, x, y, z;
        cin>>a>>b;
        x=a;
        y=2*x;
        if(y<=b)cout<<x<<" "<<y<<endl;
        else cout<<"-1"<<" "<<"-1"<<endl;
    }
}
