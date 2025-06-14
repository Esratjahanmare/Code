#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 1; i <= n; ++i)
        {
            if (i == 1)
            {
                a[i - 1] = 1;
            }
            else
            {
                a[i - 1] = i * 2;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
