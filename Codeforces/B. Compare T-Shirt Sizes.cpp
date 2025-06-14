
#include <iostream>
#include <string>
using namespace std;

int compareSizes(string a, string b) {
    // Extracting the size information
    char sizeA = a.back();
    char sizeB = b.back();

    // Extracting the number of X's before S or L
    int countX_A = a.size() - 1 - (sizeA == 'S' || sizeA == 'L');
    int countX_B = b.size() - 1 - (sizeB == 'S' || sizeB == 'L');

    // Comparing sizes according to the given rules
    if (sizeA == 'S') {
        if (sizeB == 'L' || sizeB == 'M') return '<';
        if (countX_A != countX_B) return countX_A < countX_B ? '<' : '>';
    } else if (sizeA == 'L') {
        if (sizeB == 'M' || sizeB == 'S') return '>';
        if (countX_A != countX_B) return countX_A < countX_B ? '<' : '>';
    } else {
        if (sizeA == sizeB) return '=';
        if (sizeA == 'M' && (sizeB == 'S' || sizeB == 'XL' || sizeB == 'XXL')) return '>';
        if (sizeA == 'S' && (sizeB == 'L' || sizeB == 'XL' || sizeB == 'XXL')) return '<';
        if (sizeA == 'L' && (sizeB == 'S' || sizeB == 'M' || sizeB == 'XXS')) return '>';
        if (countX_A != countX_B) return countX_A < countX_B ? '<' : '>';
    }

    return '=';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;
        char result = compareSizes(a, b);
        cout << result << endl;
    }

    return 0;
}
