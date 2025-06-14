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
        ll n, x, m;
        cin>>x>>n>>m;
         while (n > 0 && x > 20) {
            x = x / 2 + 10;
            n--;
        }
        x -= m * 10;
        (x<=0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}
