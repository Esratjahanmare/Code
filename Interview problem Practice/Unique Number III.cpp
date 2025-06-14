
class Solution {
  public:
    int getSingle(vector<int> &arr) {
          unordered_map<int, int> mp;
    for (int num : arr) {
        mp[num]++;
    }
    for (auto &it : mp) {
        if (it.second == 1) {
            return it.first;
        }
    }
    return -1;
    }
};

/*
vector<int> getSingle(vector<int> &arr) {  // changed return type to vector<int>
    unordered_map<int, int> mp;
    vector<int> result;
    for (int num : arr) {
        mp[num]++;
    }
    for (auto &entry : mp) {
        if (entry.second == 1) {
            result.push_back(entry.first); // collect elements that appear once
        }
    }
    return result; // this now matches the function return type
}

*/

/*
int getSingle(vector<int> &arr) {
    int result = 0;
    for (int num : arr) {
        result ^= num; // XOR cancels out duplicates
    }
    return result;
}
*/
