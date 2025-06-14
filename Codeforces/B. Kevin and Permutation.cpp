#include <bits/stdc++.h>
using namespace std;
int main(){
 int t;                      cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<4){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        int l=(n/2)+1,r=1;
        while(l<=n){
            cout<<l<<" ";
            l++;
            cout<<r<<" ";
            r++;
            if(l==n and n%2==1){
                cout<<l<<" ";
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}
