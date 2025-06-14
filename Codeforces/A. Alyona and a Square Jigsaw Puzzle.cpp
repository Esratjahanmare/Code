#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
   int sum=0, tar=1, ans=1;
           for(int i=1; i<n; i++){
            sum+=a[i];
            while(sum>=(2*(2*tar+2))){
                if(sum==(2*(2*tar+2))){
                    ans++;
                }
                sum-=(2*(2*tar+2));
                tar+=2;
            }
           }
           cout<<ans<<endl;
    }
}
