#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,lucky=0;

    cin>>n>>m;
    for(i=n; i<=m; i++)
    {
        int x=i,cnt=0;
        while(x)
        {
            if(x%10!=4 && x%10!=7)
                cnt++;
            x=x/10;
        }
        if(cnt==0)
           {
                cout<<i<<" ";
                lucky++;
            }
    }
    if(lucky==0)
        cout<<"-1"<<endl;
        return 0;
}
