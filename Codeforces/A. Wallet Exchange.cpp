#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;

    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int sum=a+b;

        if(sum%2==0)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
}
