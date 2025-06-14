#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b,r, gcd;
    int maxi, mini;

    cin>>a>>b;
    if(a>=b)
    {
        maxi=a;
        mini=b;
    }
    else
    {
        maxi=a;
        mini=b;
    }
    for(int i=1; i<=mini; i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    cout<<gcd<<endl;
}
