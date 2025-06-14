#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<char> v;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == s[i+1])
                i++;
            else
                v.push_back(s[i]);
        }
        sort(v.begin(), v.end());
        vector<char> vc;
        for(int i = 0; i < v.size() ; i++)
        {
            if(v[i] == v[i+1])
                i++;
            else
                vc.push_back(v[i]);
        }
        for(auto u : vc)
            cout << u;
        cout << endl;
    }
    return 0;
}
