#include <iostream>
#include <vector>
#include <set>
#include<bits/stdc++.h>
using namespace std;

char find_missing_letter(vector<string>& square) {
    // Check rows
    for (const auto& row : square) {
        int count_question_mark = count(row.begin(), row.end(), '?');
        if (count_question_mark == 1) {
            set<char> letters = {'A', 'B', 'C'};
            for (char ch : row) {
                if (ch != '?') {
                    letters.erase(ch);
                }
            }
            return *letters.begin();
        }
    }

    // Check columns
    for (int col = 0; col < 3; col++) {
        int count_question_mark = 0;
        set<char> letters = {'A', 'B', 'C'};
        for (int row = 0; row < 3; row++) {
            char ch = square[row][col];
            if (ch == '?') {
                count_question_mark++;
            } else {
                letters.erase(ch);
            }
        }
        if (count_question_mark == 1) {
            return *letters.begin();
        }
    }

    return '\0';  // This should not happen if the input is valid.
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> square(3);
        for (int i = 0; i < 3; i++) {
            cin >> square[i];
        }

        char result = find_missing_letter(square);
        cout << result << endl;
    }

    return 0;
}
