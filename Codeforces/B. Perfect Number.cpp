
#include <iostream>
using namespace std;

// Function to check if a number is perfect
bool isPerfect(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum == 10;
}

int main() {
    int k;
    cin >> k;
    int count = 0;
    int num = 0;
    while (count < k) {
        num++;
        if (isPerfect(num)) {
            count++;
        }
    }
    cout << num << endl;
    return 0;
}
