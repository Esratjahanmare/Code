#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[4],i, a,b,c,d;
    for(i=0;i<4; i++)
    {
        cin>>ar[i];
    }

    sort(ar, ar+4);
    a=ar[3]-ar[2];
    b=ar[3]-ar[1];
    c=ar[3]-ar[0];

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}
