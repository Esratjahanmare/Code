class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();

        if (n == 0) return 0; // If needle is empty, return 0

        for (int i = 0; i <= m - n; i++) { // Traverse haystack
            if (haystack.substr(i, n) == needle) { // Check substring
                return i; // Return the starting index
            }
        }
        return -1; // If not found, return -1
    }
};

