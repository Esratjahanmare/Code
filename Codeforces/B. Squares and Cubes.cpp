#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
     a=sqrt(n);
     if(n==1)
        cout<<"1"<<endl;
     else
        cout<<a+1<<endl;
    }
}
