#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cnt=0, count=0;
    cin>>n;
    int a,b;
    while(n--)
    {
  cin>>a>>b;
        if(a>b)
            count++;
        else if(a<b)
            count--;
    }
    if(count==0)
        cout<<"Friendship is magic!^^"<<endl;
    else if(count>0)
    cout<<"Mishka"<<endl;
    else
        cout<<"Chris"<<endl;

}
