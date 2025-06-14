#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long   a, b, n, x,count=0;
    cin>>n>>x;
    char c;
    while(n--)
    {
        cin>>c>>a;

        if(c=='+')
            x+=a;
        else
        {
            if(a<=x)
                x-=a;
            else
            {
                count++;
            }
        }
    }
    cout<<x<<" "<<count<<endl;
}
