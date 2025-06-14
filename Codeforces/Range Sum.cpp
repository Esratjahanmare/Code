#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, l, r, i;

    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        long long sum=0;
        for(i=l; i<=r; i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
}
