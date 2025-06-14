#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--){
        long long m, a, b, c;
        cin>>m>>a>>b>>c;
        long long r1 = min(a, m);
        long long rr1 = m - r1;
        long long r2 = min(b, m);
        long long rr2 = m - r2;
        long long seat = min(c, rr1 + rr2);
        long long ts = r1 + r2 + seat;
        cout << ts << endl;

    }
}
