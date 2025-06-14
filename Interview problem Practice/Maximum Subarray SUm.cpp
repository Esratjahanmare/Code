
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
         int n = arr.size();
        int maxSum = arr[0]; // Initialize with the first element
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum = 0; // Reset the sum for each starting point
            for (int j = i; j < n; j++) {
                sum += arr[j];
                maxSum = max(sum, maxSum); // Update maxSum if the current sum is greater
            }
        }

        return maxSum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends
