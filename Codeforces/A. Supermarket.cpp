#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    double min_cost = 1e9;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        double cost = static_cast<double>(a) / b * m;
        min_cost = min(min_cost, cost);
    }

    cout << setprecision(8) << min_cost << endl;
    return 0;
}
