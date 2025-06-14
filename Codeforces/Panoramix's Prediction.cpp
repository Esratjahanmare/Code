#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, maxi = 0, mini = 0, i, j, cnt = 0;

    cin >> n >> m;
    if (n > m)
    {
        maxi = n;
        mini = m;
    }
    else
    {
        maxi = m;
        mini = n;
    }

    for (i = 2; i < maxi; i++)
    {
        cnt = 0; // Reset count for each value of i

        for (j = mini; j <= maxi; j++)
        {
            if (i % j == 0)
            {
                if (j >= mini && j <= maxi)
                {
                    cnt++;
                    break;
                }
            }
        }
    }

    if (cnt == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
