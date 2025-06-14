#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, temp, a, b, mm, mn, r, digit;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        mm = max(a, b);
        mn = min(a, b);
        n = mm - mn;
        if(n==0)
            cout<<n<<endl;
        else
        {
            if(n%10==0)
                cout<<n/10<<endl;
            else
                cout<<(n/10)+1<<endl;
        }
    }
    return 0;
}
