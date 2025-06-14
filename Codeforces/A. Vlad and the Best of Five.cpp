#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
       cin >> s;

        int A = count(s.begin(), s.end(), 'A');
        int B = count(s.begin(), s.end(), 'B');

        if (A >B) {
            cout << "A"<<endl;
        } else {
            cout << "B"<<endl;
        }
    }

    return 0;
}
