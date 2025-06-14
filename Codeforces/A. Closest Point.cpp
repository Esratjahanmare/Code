#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool found = true;
        if(n!=2)
        {
            found = false;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                int diff = a[i + 1] - a[i];

                if (diff < 2 )
                {
                    found = false;
                    break;
                }
                else
                    found = true;
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
