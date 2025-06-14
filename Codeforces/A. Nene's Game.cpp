
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, q, cnt=0;
        cin >> k >> q;

        int a[k], b[q];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            int b[i];
            cin >> b[i];
            if(b[i]>=a[0])
                cout<<a[0]-1<<" ";
            else
                cout<<b[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
