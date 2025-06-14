#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int  p=0,s=0;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if(n<=2)
            cout<<"1"<<endl;
        else
        {
            p=n-2;
            if(p%x==0)
                s=p/x;
            else
                s=p/x+1;

            cout<<s+1<<endl;
        }

    }

    return 0;
}
