#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c, d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        int sum=a+b+c+d;
        if(sum%3==0)
            cout<<"YES"<<endl;
        else
        {
            if(a>sum/3 || b>sum/3 || c>sum/3)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
}
