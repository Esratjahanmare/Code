#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    char a[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]=='1'){
            if(a[i+1][j]=='1' && a[i][j+1]=='1')
            {
                cout<<"SQUARE"<<endl;
                return;
            }
            else
            {
                cout<<"TRIANGLE"<<endl;
                return;}
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

