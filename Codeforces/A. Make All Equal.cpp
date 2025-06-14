#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int mx=-100000000;
        map<int, int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            mx=max(mx, mp[a[i]]);
        }
        int ans=n-mx;
        cout<<ans<<endl;
    }

    return 0;
}
