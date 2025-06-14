#include<bits/stdc++.h>
using namespace std;
bool solution(vector<int> &arr, int x) {
    set<int> seen;
        for (int num : arr) {
            if (seen.count(num + x) || seen.count(num - x)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
}
int main()
{
    int n;
    cin>>n;
     vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x; cin>>x;
    cout<<solution(arr, x);
}
