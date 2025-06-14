#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        set<int>s;
        for(int i=0; i<n; i++){
           s.insert(i+1);
        }
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
           if(s.find(a[i])!=s.end()){
            cout<<a[i]<<" ";
            s.erase(a[i]);
           }
           else{
            cout<<*s.begin()<<" ";
            s.erase(s.begin());
           }

        }
        cout<<endl;
    }
}
