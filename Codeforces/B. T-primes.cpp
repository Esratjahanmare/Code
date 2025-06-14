#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a[1000000]={0};
    for(ll i=2;i<=1000000;i++){
        if(a[i]==0){
            for(ll j=i*i;j<=1000000;j+=i){
               a[j]=1;
            }
        }
    }

    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll b;
        cin>>b;
        ll s=sqrt(b);
            if(b==1){
                cout<<"NO"<<endl;
            }
        else if(s*s==b&&a[s]==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}
