#include <bits/stdc++.h>
using namespace std;

int ans(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 8;
    int res = 1;
    int base = 1378 % 10;
    while (n > 0) {
        if (n % 2 == 1)
            res= (res* base) % 10;
        base = (base * base) % 10;
        n /= 2;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << ans(n) << endl;
    return 0;
}
