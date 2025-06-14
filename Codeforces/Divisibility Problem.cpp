#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, mm, mn, i, sum = 0;
    cin >> n;
   while(n--)
    {
        sum = 0;
        cin >> mm >> mn;

    if(mm%mn==0)
        {
            cout<<"0"<<endl;
        }
    else
        {
            int x=mn-(mm%mn);
            cout<<x<<endl;
        }
    }
    return 0;
}
