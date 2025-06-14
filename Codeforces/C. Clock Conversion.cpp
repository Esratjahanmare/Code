#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int h,m;
        char c;
        cin >> h >> c >> m;

        string p = (h >= 12) ? "PM" : "AM";
        if (h > 12) h -= 12;
        if (h == 0) h = 12;

        cout << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m<< " " << p << endl;
    }

    return 0;
}
