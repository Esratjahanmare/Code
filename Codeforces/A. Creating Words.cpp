
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void first_char(string &a, string &b) {
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}

int main() {
    int t;
    cin >> t;
    vector<pair<string, string>> tc(t);

    for (int i = 0; i < t; ++i) {
        cin >> tc[i].first >> tc[i].second;
    }

    for (int i = 0; i < t; ++i) {
        string a = tc[i].first;
        string b = tc[i].second;
        first_char(a, b);
        cout << a << " " << b << endl;
    }

    return 0;
}
