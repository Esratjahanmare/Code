class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        int n=arr.size();
        int x=n/2;
        map<int, int>mp;
        for(int num : arr){
            mp[num]++;
        }

         for (auto &it : mp) {
            if (it.second > x) {
                return it.first;
            }
        }

        return -1;
    }
};
