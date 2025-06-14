#include<bits/stdc++.h>
using namespace std;

int main() {
    // Reading input grid
    char grid[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> grid[i][j];
        }
    }

    // Possible combinations of indices to form a word of length 3
    int combinations[6][3] = {
        {0, 1, 2}, {0, 2, 1},
        {1, 0, 2}, {1, 2, 0},
        {2, 0, 1}, {2, 1, 0}
    };

    string smallest_word = "AAA"; // Initialize with a large lexicographical value

    // Checking all combinations to find the smallest word
    for (int k = 0; k < 6; ++k) {
        int i = combinations[k][0];
        int j = combinations[k][1];
        int l = combinations[k][2];

        string current_word = "";
        current_word += grid[i][j];
        current_word += grid[j][l];
        current_word += grid[i][l];

        // Update smallest_word if current_word is smaller
        if (current_word < smallest_word) {
            smallest_word = current_word;
        }
    }

    // Output the smallest word found
    cout << smallest_word << endl;

    return 0;
}
