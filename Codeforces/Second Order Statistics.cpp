#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,a,i;
    cin>>n;

    for( i=0; i<n; i++)
    {
        cin>>a;
        s.insert(a);
    }

    if(s.size()==1)
        cout<<"NO"<<endl;
    else
        cout<<*(++s.begin())<<endl;
}
