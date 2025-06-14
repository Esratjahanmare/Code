//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<int> sortByFreq(vector<int>& arr) {
        // Frequency map
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }

        // Sort array based on frequency and value
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            if (freq[a] == freq[b]) return a < b; // If frequency is same, sort by value.
            return freq[a] > freq[b]; // Otherwise, sort by frequency in descending order.
        });

        return arr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends

