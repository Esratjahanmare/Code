#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long t,cnt=0;
        cin>>t;

        if(t%2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int cnt=0;
            while(t%2==0)
            {
                t/=2;
            }
            if(t>1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

}
