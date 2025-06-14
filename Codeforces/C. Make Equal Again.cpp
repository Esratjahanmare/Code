#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        if(a[0]==a[n-1])
        {
            int aa=1, bb=n-2;
            for(int k=1; k<n; k++)
            {
                if(a[k]==a[k-1]) aa++;
                else break;
            }
            for(int k=n-2; k>=0; k--)
            {
                if(a[k]==a[k+1]) bb--;
                else break;
            }
            if(aa>bb){
                cout<<0<<endl;
                continue;
            }
            cout<<bb-aa+1<<endl;
        }
        else
        {
            int left=1, right=1;
            for(int i=1; i<n; i++){
                if(a[i]==a[i-1]) left++;
                else break;
            }
            for(int i=n-2; i>=0; i--){
                if(a[i]==a[i+1]) right++;
                else break;
            }
            cout<<n-max(left, right)<<endl;
        }
    }
}
