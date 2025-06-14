#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x=1,d;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else
        {
            while(1)
            {
                x*=2;
                if(x>n)
                {
                    break;
                }
                d=x;
            }
            cout<<d<<endl;
        }
    }
}
