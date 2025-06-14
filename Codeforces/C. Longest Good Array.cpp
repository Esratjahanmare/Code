#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l,r; cin >> l >> r;
 	ll a = 1;
 	ll cnt = 1;
 	while(l <= r){
 		l = l + a;
 		cnt++;
 		a++;
 	}
 	cout << cnt-1 << endl;
    }

    return 0;
}
