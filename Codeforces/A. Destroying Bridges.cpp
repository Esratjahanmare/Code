#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int s=(n*(n-1))/2;
        if (k>=s)
        {
            cout << 1<< endl;
        }
        else if(n==k)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }

    return 0;
}
