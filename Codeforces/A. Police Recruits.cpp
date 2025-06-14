#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, police=0, crime=0;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>x;
        if(x>0)
            police+=x;
        else
        {
            if(police<1)
                crime++;
            else
                police--;
        }
    }
        cout<<crime<<endl;
    }
