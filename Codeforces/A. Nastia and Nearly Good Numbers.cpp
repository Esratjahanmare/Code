#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--){
    ll a, b, x, y, z;
    cin>>a>>b;

    if( b==1)
        cout<<"NO"<<endl;
    else if( b==2)
    {
        cout<<"YES"<<endl;
        if(a==1)
            cout<<3<<" "<<1<<" "<<4<<endl;
        else{
            b*=a;
            z=a*b;
            b--;
            x=a*b;
            y=a;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    else{
          b*=a;
            z=a*b;
            b--;
            x=a*b;
            y=a;
            cout<<"YES"<<endl<<x<<" "<<y<<" "<<z<<endl;
    }

    }
}
