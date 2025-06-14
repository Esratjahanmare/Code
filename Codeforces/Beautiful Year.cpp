#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin>>n;

    while(1)
    {
        n++;
        int m, nn, o, p;
        m=n/1000;
        nn=(n/100)%10;
        o=(n/10)%10;
        p=n%10;

        if(m!=nn &&(nn!=o) && (o!=p) && (m!=p) && (m!=o) && (nn!=p))
        {
            break;
        }
    }
        cout<<n;

    return 0;
}
