
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%3==0)
            cout<<n/3<<endl;
        else if(n==1)
            cout<<2<<endl;
        else if(n%3==2)
            cout<<1+((n-2)/3)<<endl;
        else if(n%3==1)
            cout<<2+((n-4)/3)<<endl;

    }
}
