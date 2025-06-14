#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  cnt=0, i,j;
    int a[5];
    for(i=0; i<4; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            if(a[i]==a[j])
                {cnt++;
                break;}
        }
    }

    cout<<cnt<<endl;

}
