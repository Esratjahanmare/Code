#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, w=0, cl=0;

    cin>>m>>n;
    int ans=m*n;
    char c;
    for(int i=0; i<ans; i++)
    {
        cin>>c;
        if(c=='W' || c=='B' || c=='G') w++;
        else cl++;
    }
    if(cl!=0) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}
