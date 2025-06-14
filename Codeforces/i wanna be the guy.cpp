#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, ar[500],cnt=0;
    cin>>a>>b;

    for(int i=0; i<b; i++)
    {
        cin>>ar[i];
    }

    cin>>c;
    for(int i=b; i<b+c; i++ )
    {
        cin>>ar[i];
    }
    sort(ar, ar+(b+c));
    for(int i=0; i<b+c; i++)
    {
        if(ar[i]!=ar[i+1])
        {
            cnt++;
        }
    }
    if(cnt==a)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

}
