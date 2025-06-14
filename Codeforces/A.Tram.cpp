#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, m, x, sum=0, s=0;

    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>m;
       sum=(n+s)-m;
       if(sum<0)
        s=0;
       else
        s=sum;
    }
    cout<<sum<<endl;
}
