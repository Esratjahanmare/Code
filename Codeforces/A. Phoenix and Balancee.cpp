#include<bits/stdc++.h>
using namespace std;

int func(int p)
{
    if(p<=2)
    {
        return 2;
    }
    else
    {
        return 2*(func(p-2))+2;
    }
}

int main()
{
        int n,p;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>p;
        cout<<func(p)<<endl;
    }
}

