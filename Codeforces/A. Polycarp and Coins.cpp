#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a;
        cin>>n;
        a=n/3;
        if(a*3==n)
            cout<<a<<" "<<a<<endl;
        else if((a*2+(a+1)==n))
        cout<<a+1<<" "<<a<<endl;
        else
            cout<<a<<" "<<a+1<<endl;
    }
}
