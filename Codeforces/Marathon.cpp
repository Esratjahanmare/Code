#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin>>t;
    int a[t];
    while(t--)
    {
        for(i=0; i<4; i++)
        {
            cin>>a[i];
        }
      int sum=0;
        for(i=1; i<4; i++)
        {
            if(a[i]>a[0])
                {sum++;}
        }
        cout<<sum<<endl;
    }
}
