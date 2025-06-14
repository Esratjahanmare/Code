#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n, sum=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            sum+=abs(v[i]);
        }
        int ans=0;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==0 && cnt==0)
            {
                continue;
            }
            if(v[i]<=0)
            {
                cnt++;
            }
            else
            {
                if(cnt>0)
                {
                    ans++;
                }
                cnt=0;
            }
        }
        if(cnt)
        {
            ans++;
        }
        cout<<sum<<" "<<ans<<endl;
    }
}
