#include <bits/stdc++.h>
using namespace std;

int oper(const vector<int>&a, int n)
{
    bool en=true;
    for(int i=0; i<n; ++i){
        if(a[i]!=a[0]){
            en=false;
        break;}
    }
    if (en) return 0;
    bool inc=true;
    for(int i=1; i<n; ++i){
        if(a[i]>a[i-1]){
            inc=false;
            break;
        }
    }
    if(inc) return 1;

    return 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << oper(a,n) << endl;
    }
    return 0;
}

