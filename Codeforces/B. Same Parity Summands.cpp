
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        if(k>n)
            cout<<"NO"<<endl;
        else if(k==1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
         }
         else if(n%2==0)
         {
             if(k%2==0)
             {
                 cout<<"YES"<<endl;
                 for(ll i=1; i<k; i++) cout<<1<<" ";
                 cout<<n-(k-1)<<endl;
             }
             else if(k*2<=n)
             {
                 cout<<"YES"<<endl;
                 for(ll i=1; i<k; i++) cout<<2<<" ";
                 cout<<n-(k-1)*2<<endl;
             }
             else cout<<"NO"<<endl;
         }
         else{
            if(k%2==1){
                cout<<"YES"<<endl;
                 for(ll i=1; i<k; i++) cout<<1<<" ";
                 cout<<n-(k-1)<<endl;
            }
            else cout<<"NO"<<endl;
         }
    }
    return 0;
}
