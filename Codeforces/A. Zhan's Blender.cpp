#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
       int x, y;
       cin>>x>>y;

       int mn=min(x, y);
       int ans=n/mn;
       if(n%mn==0)
        cout<<ans<<endl;
       else
        cout<<ans+1<<endl;
    }
}


