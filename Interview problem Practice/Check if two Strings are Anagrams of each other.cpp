#include <bits/stdc++.h>
using namespace std;
class Anagram {
public:
    bool areAnagrams(string& ss1, string& ss2)  {
        sort(ss1.begin(), ss1.end());
        sort(ss2.begin(), ss2.end());

        return ss1==ss2;

    }
};

int main()
 {
    string s1, s2;
    cin >> s1 >> s2;

    Anagram checker;

    if (checker.areAnagrams(s1, s2)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}

