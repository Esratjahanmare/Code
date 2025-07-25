//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int missingNumber(vector<int>& arr) {


        long long n = arr.size() + 1;
       long long sum = (n * (n + 1)) / 2;

         long long ss = 0;
        for (long long num : arr) {
            ss += num;
        }
        long long x=sum - ss;

       if(x==0){return 2;}

       else{ return x; }

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends
