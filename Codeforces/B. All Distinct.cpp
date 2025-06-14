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
        int a[n];
        map<int, int>mp;
        for(int i=0; i<n; i++) {
                cin>>a[i];
        mp[a[i]]++;
        }

         int d=0;
        for (auto num : mp)
        {
            d+=(num.second)-1;
        }
        int ans=n-d;
        if(d%2==1)
            ans--;
        cout<<ans<<endl;
    }
}
