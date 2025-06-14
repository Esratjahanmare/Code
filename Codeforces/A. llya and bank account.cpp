
#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    int len = n.length();
    int ans = stoi(n);  // Initialize ans with the original state of the bank account

    // Check if deleting the last digit will give a greater result
    int lastDigitRemoved = stoi(n.substr(0, len - 1));
    ans = max(ans, lastDigitRemoved);

    // Check if deleting the digit before last will give a greater result
    if (len >= 3) {
        int secondLastDigitRemoved = stoi(n.substr(0, len - 2) + n.substr(len - 1, 1));
        ans = max(ans, secondLastDigitRemoved);
    }

    cout << ans << endl;

    return 0;
}
