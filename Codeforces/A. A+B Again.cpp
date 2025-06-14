#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--)
    {
        int t; cin>>t;
        if(t<10)
            cout<<t<<endl;
        else
            cout<<(t/10)+(t%10)<<endl;
    }
}
