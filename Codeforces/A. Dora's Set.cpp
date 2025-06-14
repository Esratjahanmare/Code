#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l, r;
        cin>>l>>r;
        if(l%2==0){
            l+=1;
        }
           int cnt=0;
        if(r-l>=2){

        while(l+2<=r){
            cnt++;
            l+=4;
         }
      }
      cout<<cnt<<endl;
    }
}
