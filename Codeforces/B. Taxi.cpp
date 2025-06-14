#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int c1 = count(a.begin(), a.end(), 1);
    int c2 = count(a.begin(), a.end(), 2);
    int c3 = count(a.begin(), a.end(), 3);
    int c4 = count(a.begin(), a.end(), 4);

    int ans = c4;
    ans += c3;
    if (c1 > c3)
    {
        c1 -= c3;
    }
    else
    {
        c1 = 0;
    }
    ans += c2 / 2;
    if (c2 % 2 == 1)
    {
        ans++;
        if (c1 >= 2)
        {
            c1 -= 2;
        }
        else
        {
            c1 = 0;
        }
    }
    ans += c1 / 4;
    if (c1 % 4 != 0)
    {
        ans++;
    }

    cout << ans << endl;

    return 0;
}
