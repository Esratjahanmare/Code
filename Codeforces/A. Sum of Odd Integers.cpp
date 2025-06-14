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
        ll n, k;
        cin>>n>>k;
        if (k * k <= n && (n % 2 == k % 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
