#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int  even=0, odd=0;
        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x%2!=i%2)
            {
                if(x%2==0) even++;
                else odd++;
            }
        }
        if(odd==even) cout<<odd<<endl;
        else cout<<"-1"<<endl;
    }
}
