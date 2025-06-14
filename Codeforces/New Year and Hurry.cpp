#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, ans = 0, cnt = 0;
    cin >> n >> k;
    int a[n];
    for (i = 1; i <= n; i++)
    {
        a[i]=i;
        a[i]=a[i]*5;
    }
    int check=k;
    for(i=1; i<=n; i++)
    {
        if (check<=240)
        {
            check=check+a[i];
            if(check>240)
            {
                break;
            }
            cnt++;
        }
    }
    cout << cnt  << endl;  // Corrected the output to represent the number of problems solved
    return 0;
}
