#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        long long n, m, cnt=0, ans=0, f=0;
        cin>>n>>m;
        for(int i=1; i<=n; i++){
            string s;
            cin>>s;
            if(f==0 && s.size()+ans<=m){
                ans+=s.size();
                cnt++;
            }
            else{
                f=1;
            }
        }
        cout<<cnt<<endl;
    }
}
