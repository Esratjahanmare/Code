#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i, j, a[1666],k;

    j=1;
    for(i=1; i<=1666; i++)
    {
        if(i%3==0 || i%10==3)
            continue;
        else
            a[j]=i;
        j++;
    }

    cin>>t;
    while(t--)
    {
        cin>>k;
        //k=a[k];
        cout<<a[k]<<endl;
    }
}
