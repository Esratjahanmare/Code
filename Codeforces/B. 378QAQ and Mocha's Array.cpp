#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n),b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool good = true;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if(a[i]%a[0]!=0)
                b.push_back(a[i]);
        }

        for(int i=0; i<int(b.size()); i++)
        {
            if(b[i]%b[0]!=0)
                good = false;
        }
        if (good)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}

