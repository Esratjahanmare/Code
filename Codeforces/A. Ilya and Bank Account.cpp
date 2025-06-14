#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long len =stoi(s);

       string temp=s;
       s.erase(s.size()-1,1);
       temp.erase(temp.size()-2,1);

       long long ans=max(len, max((long long) stoi(s), (long long) stoi(temp)));

    cout<<ans<<endl;

    return 0;
}
