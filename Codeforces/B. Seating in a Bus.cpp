#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n+1), b(n+2);
        for(int i=1; i<=n; i++)   cin>>a[i];
        bool ans=true;
        b[a[1]]=a[1];
        for(int i=2; i<=n; i++)
        {
            b[a[i]]=a[i];
            if(b[a[i]-1]>0 || b[a[i]+1]>0) ans=true;
            else
            {
                ans=false;
                break;
            }
        }
        if(!ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
