#include<iostream>
using namespace std;

int main()
{
    int n, i, cnt=0;

    cin>>n;

    int a[n];

    for(i=1; i<=n; i++)
    {
       cin>>a[i];
    }
  for(i=1; i<=n; i++)
    {
        if(a[i]==1)
            cnt=1;
    }
    if(cnt==1)
            cout<<"HARD"<<endl;
        else
            cout<<"EASY"<<endl;


        return 0;
    }
