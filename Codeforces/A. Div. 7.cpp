#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n%7;
        int y=7-x;
        int a=n%10;
        if(n%7==0){ cout<<n<<endl; }
        else if(a+y<10) {cout<<n+y<<endl;}
        else {cout<<n-x<<endl;}
    }
}
