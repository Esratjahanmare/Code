#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n, m, i, sum=0, c=0;

    while(1)
    {
        cin>>n>>m;
        if(n<=0 || m<=0)
        {
            break;
        }
        else
        {
            for(i=min(n,m); i<=max(n,m); i++)
            {
                sum+=i;
                cout<<i<<" ";
            }
            cout<<"sum ="<<sum<<endl;
        }

        sum=0;
    }
    return 0;
}
