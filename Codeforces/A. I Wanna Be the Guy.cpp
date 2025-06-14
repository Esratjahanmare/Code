#include<iostream>
using namespace std;
int main()
{
    int n, i,x,y,j, cnt=0;

    cin>>n;
    cin>>x>>y;
    int a[x], b[y];

    for(i=0; i<x; i++)
    {
        cin>>a[x];
    }
    for(j=0; j<y; j++)
    {
        cin>>b[y];
    }
    for(i=0; i<x; i++)
    {
        if(a[i]==n)
            cnt=1;
        break;
    }
    for(j=0; j<y; j++)
    {
        if( b[j]==n)
            cnt=1;
        break;
    }
    if(cnt=1)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
