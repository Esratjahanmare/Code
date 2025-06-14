#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, r;
    long long n, temp;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>n;
        temp=n;

        if(n==0)
            cout<<"0"<<endl;
        else
    {while(temp!=0)
    {
        r=temp%10;
      cout<<r<<" ";
        temp=temp/10;
    }
  cout<<endl;}
        }
    return 0;
}
