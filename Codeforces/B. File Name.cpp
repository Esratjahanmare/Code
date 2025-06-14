#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string file_name;
    cin >> file_name;

    int removals = 0;
    for (int i = 0; i < n - 2; ++i) {
        if (file_name[i] == 'x' && file_name[i + 1] == 'x' && file_name[i + 2] == 'x') {
            ++removals;
        }
    }

    cout << removals << endl;

    return 0;
}
