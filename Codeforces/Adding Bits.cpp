#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, dec;

    cin>>a>>b;

    for(int i=0; i<=32; i++)
    {
    int x= a%2;
    a=a/2;
    int y= b%2;
    b=b/2;

    if(x!=y)
        dec=dec+pow(2,i);
    }

    cout<<dec<<endl;
    return 0;

}
