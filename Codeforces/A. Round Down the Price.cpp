#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int temp=n;
        int cnt=0;
        while(temp!=0)
        {
            temp/=10;
            cnt++;
        }
        int p=cnt-1;
        int x=pow(10,p);
        cout<<n-x<<endl;
    }
}
