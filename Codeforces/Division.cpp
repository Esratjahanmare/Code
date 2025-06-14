#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x<=1399)
            cout<<"Division 4"<<endl;
        else if(x<=1599 && x>=1400)
            cout<<"Division 3"<<endl;
        else if(x<=1899 && x>=1600)
            cout<<"Division 2"<<endl;
        else
            cout<<"Division 1"<<endl;
    }
}
