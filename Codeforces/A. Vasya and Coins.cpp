#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         long long sum=0;
        int a, b;
        cin>>a>>b;
         sum=(a+b*2)+1;
         if(a==0)
            cout<<1<<endl;
         else
            cout<<sum<<endl;
    }
}
