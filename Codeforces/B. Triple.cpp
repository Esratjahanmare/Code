#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n; int a[n], ans=-1;
        map<int, int>cnt;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
            if(cnt[a[i]]>=3)
                ans=a[i];
        }
        cout<<ans<<endl;
    }
}
