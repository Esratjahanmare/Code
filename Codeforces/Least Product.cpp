#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, k, ans=1;
    cin >> n;
    while(n--)
    {
        cin >> k;
        for(i = 1; i <= k; i++)
        {
            int x; // Use a different variable for input
            cin >> x;
            // ans *= x; // Uncomment this line if needed
        }
        ans = 1;
        for(i = 1; i <= k; i++)
        {
            ans *= i;
        }
        if(ans < 0)
        {
            cout << "0" << endl;
        }
        else if(k == 1)
        {
            cout << "1" << endl;
            cout << "1" << " " << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
            cout << k - 1 << " " << "0" << endl;
        }
    }
    return 0;
}
