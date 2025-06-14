#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i, s=0, d=0,turn=1;
    cin>>n;
    vector<int>v(n);

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    while(!v.empty())
    {
        if(turn==1)
        {
            if(v[0]>v.back())
            {
                s+=v[0];
                v.erase(v.begin());
            }
            else
            {
                s+=v.back();
                v.pop_back();
            }
            turn=2;
        }
        else
        {
            if(v[0]>v.back())
            {
                d+=v[0];
                v.erase(v.begin());
            }
            else
            {
                d+=v.back();
                v.pop_back();
            }
            turn=2;
        }

    }
    cout<<s<<endl;
    cout<<d<<endl;
}
