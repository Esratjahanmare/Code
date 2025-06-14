#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int cnt=1, tg=0;
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1]) continue;
        else cnt++;
        if(s[i-1]=='0' && s[i]=='1')
            tg=1;
    }
    int ans=cnt-tg;
    cout<<ans<<endl;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
       solve();
    }

    return 0;
}
