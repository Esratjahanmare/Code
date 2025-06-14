#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;

    cin>>s>>n;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end());

    bool func = true;
     for(int i=0; i<n; i++)
    {
        if(s>v[i].first)
            {
                s+=v[i].second;
            }
        else
            {
                func = false;
                break;
            }
    }
    if(func)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
