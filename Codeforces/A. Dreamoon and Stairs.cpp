#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m,  b=0, i=1;
    cin >> n >> m;

    if (n < m )
    {
        cout << "-1" << endl;
    }
    else if(m>=(n+1)/2)
    {
        cout<<m<<endl;
    }
    else
    {
        n=n+1;
        while(b<(n/2))
        {
            b=m*i;
            i++;
        }
        cout<<b<<endl;
    }

    return 0;
}
