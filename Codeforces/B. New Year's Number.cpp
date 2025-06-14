#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int cnt=0;
        int x=n/2020;

        int m=x+(x*2020);
        if(m>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
