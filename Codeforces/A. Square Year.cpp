#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int x=0;
    float y=0;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        x=sqrt(a[i]);
        y=sqrt(a[i]);
        if(x==y){
           if(x%2==0){
            cout<<x/2<<" "<<x/2<<endl;
           }
           else{
            cout<<x/2<<" "<<x/2+1<<endl;
           }
        }
        else{
            cout<<-1<<endl;
        }
    }
}
