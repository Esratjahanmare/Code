#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, ll> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        string ss = "ABCDEFG";
        ll cnt = 0;
        for (char x :ss)
        {
            if (mp[x] < m)
            {
                cnt += (m - mp[x]);
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
