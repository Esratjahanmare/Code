#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;

    cin>>t;
    while(t--)
    {
        int  ans=1;
        int a1, a2, a3, a4, b1, b2, b3, b4;
       cin>>a1>>b1;
       cin>>a2>>b2;
       cin>>a3>>b3;
       cin>>a4>>b4;

       if(a1==a3) ans*=abs(b1-b3);
       else ans*=abs(a1-a3);
       if(a2==a4) ans*=abs(b2-b4);
       else ans*=abs(a2-a4);
        cout<<ans<<endl;
    }
}
