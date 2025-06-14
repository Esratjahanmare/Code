#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=n-1; j>=i; j--)
            {cout<<" ";
    }

    for(int z=1; z<(i*2); z++)
    {
            cout<<'*';
        }
        cout<<endl;
    }
}
