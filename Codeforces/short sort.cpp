#include <stdio.h>

long long int maxProduct(int n, int digits[]) {
    long long int product = 1;
    int minDigit = 9;
    int minDigitIndex = -1;

    for (int i = 0; i < n; i++) {
        product *= digits[i];
        if (digits[i] < minDigit) {
            minDigit = digits[i];
            minDigitIndex = i;
        }
    }

    if (minDigit != 9) {
        product /= minDigit;
        product *= (minDigit + 1);
    }

    return product;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int digits[9];
        for (int i = 0; i < n; i++) {
            scanf("%d", &digits[i]);
        }

        long long int result = maxProduct(n, digits);
        printf("%lld\n", result);
    }

    return 0;
}
