#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
     while(t--)
     {
         long long n;
         cin>>n;
         long long a[n];
         for(int i=0; i<n; i++)
         {
             cin>>a[i];
         }
         bool ans =true;
         sort(a, a+n);
         for(int i=1; i<n; i++)
         {
             if(a[i]==a[i-1]){
                ans=false;
             break;
             }
         }
         if(ans)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
     }
}
