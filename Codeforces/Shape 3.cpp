#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,j, z;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=n-1; j>=i; j--)
        {
            cout<<" ";
        }

        for(int z=1; z<(i*2); z++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=2*i-1; j++)
        {
            cout<<'*';
        }
        cout<<endl;

    }
    return 0;

}


