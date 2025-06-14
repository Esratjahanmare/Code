#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, h, m;
    cin>>t;
    while(t--)
    {
        m=0;
        cin>>a>>b;
       int sum=24*60;
        h=a*60+b;
        m=sum-h;
        cout<<m<<endl;
    }
}
