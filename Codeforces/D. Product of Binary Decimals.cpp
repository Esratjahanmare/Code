#include <iostream>
using namespace std;

bool isBinaryDecimal(int n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1 || isBinaryDecimal(n)) {
            cout << "YES" << endl;
        } else {
            bool possible = false;
            for (int i = 2; i * i <= n; ++i) {
                if (n % i == 0 && isBinaryDecimal(i) && isBinaryDecimal(n / i)) {
                    possible = true;
                    break;
                }
            }
            if (possible) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
