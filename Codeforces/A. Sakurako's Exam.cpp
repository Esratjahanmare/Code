#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int sum=a+(b*2);
        if(sum%2!=0)
            cout<<"NO"<<endl;
        else if(sum%2==0 && a>=2)
            cout<<"YES"<<endl;
        else if(b%2==0 && a%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
