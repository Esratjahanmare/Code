#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,fact=1 ;

    cin>>n;
    for(r=1; r<=n; r++)
    {
        fact=fact*r;
    }
    if(n<=5)
    {
        cout<<fact<<endl;
    }
    else
    {
        cout<<fact*6<<endl;
    }

    return 0;
}
