#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long ans = pow(2, floor(log2(n)));
        cout << ans << endl;
    }

    return 0;
}
