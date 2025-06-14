#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n;

        long long k = (n - y) / x;
        cout << (k * x) + y << endl;
    }

    return 0;
}
