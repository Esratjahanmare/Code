#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, mx=0, cnt=1;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i + 1] > a[i])
        {
            cnt++;
        }
        else
        {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }
    mx = max(mx, cnt);
    cout << mx << endl;
    return 0;
}
