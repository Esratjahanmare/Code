#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int sum=0;
        if(a+b>=10 || b+c>=10 || a+c>=10)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
