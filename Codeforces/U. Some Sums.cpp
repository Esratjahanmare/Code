#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i = 1, j, n, temp, r, a, b, sum = 0, cnt = 0;

    cin >> n >> a >> b;

     for(i=1; i<=n; i++)
    { sum=0;
        temp = i;
        while (temp > 0)
        {
            r = temp % 10;
            sum = sum + r;
            temp /= 10;
        }
            if (sum>=a && sum<=b)
                {cnt += i;}
    }

    cout << cnt << endl;
}
