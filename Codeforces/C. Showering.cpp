#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, s, m;
        cin>>n>>s>>m;
        int p=0, diff=-1, k;
        for(int i=0; i<n; i++)
        {
            int l, r;
            cin>>l>>r;
            k=(l-p);
            p=r;
            diff=max(k, diff);
        }
        k=m-p;
        diff = max(diff, k);
        if(diff>=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
