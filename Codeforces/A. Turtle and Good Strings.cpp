#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
     ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
       cin >> n;
        string s;
        cin >> s;

        if (s[0] != s[n-1])
        cout << "YES" << endl;
        else
         cout << "NO" << endl;

    }
}
