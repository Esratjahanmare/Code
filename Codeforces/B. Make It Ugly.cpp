#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n; int a[n];
        map<int, int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        if(mp.size()==1)
            cout<<-1<<endl;
        else
        {
            int v=a[0];
            int cnt=0, ans=n;
            for(int i=0; i<n; i++)
                {
                    if(a[i]==v) cnt++;
                    else
                    {
                        ans=min(ans, cnt);
                        cnt=0;
                    }
                }
        ans=min(ans, cnt);
        cout<<ans<<endl;
        }
    }
}
