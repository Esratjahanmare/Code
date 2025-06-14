#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, m,a,r;
    cin>>n;

    while(n--)
    {
        cin>>a;
         int x=0;
        while(a)
        {
            r=a%10;
            x= max(r,x);
            a/=10;
        }
        cout<<x<<endl;
    }
}
