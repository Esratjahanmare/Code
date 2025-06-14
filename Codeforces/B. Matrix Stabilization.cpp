#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m;
        cin>>n>>m;
        ll a[n][m];
        for(ll i=0; i<n; i++) {
            for(ll  j=0; j<m; j++)  {
                cin>>a[i][j]; }
        }
         bool okay=true;
         while(okay)
         {
             okay=false;
             ll up, down, left, right;
               for(ll i=0; i<n; i++) {
            for(ll  j=0; j<m; j++)  {
               if(i>0) up=a[i-1][j];
               else up=0;

               if(j>0) left=a[i][j-1];
               else left=0;

               if(i<n-1) down=a[i+1][j];
               else down=0;

               if(j<m-1) right=a[i][j+1];
               else right=0;
               ll m=max(max(up, down), max(right, left));
               if(a[i][j]>m){
                a[i][j]=m;
                okay = true;
                 }
              }
          }
      }
      for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cout<<a[i][j]<<" "; }
        cout<<endl;
      }
  }
}
