#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s;
        cin>>s;
        int l=0;
        int r=n-1;
        int ans=n;
        while(l<r && s[l]!=s[r])
        {
            l++;
            r--;
            ans-=2;
        }
        cout<<ans<<endl;
    }
}
