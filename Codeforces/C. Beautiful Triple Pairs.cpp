#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        map<tuple<int, int, int>, int>mp;
        long long ans=0;
        for(int i=0; i<n-2; i++){
            tuple<int, int, int>triplet = make_tuple(a[i], a[i+1], a[i+2]);
            vector<tuple<int, int, int>>mist(3);
            mist[0] = make_tuple(0, a[i+1], a[i+2]);
            mist[1] = make_tuple( a[i], 0, a[i+2]);
            mist[2] = make_tuple(a[i], a[i+1], 0);

            for(auto &it: mist){
                ans+=mp[it] - mp[triplet];
                mp[it]++;
            }
            mp[triplet]++;
        }
        cout<<ans<<endl;
    }
}
