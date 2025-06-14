#include<bits/stdc++.h>
using namespace std;
int main()

{
  int n, first=0, second=1, cnt, fibo;

    cin>>n;

   if(n==1)
    cout<<0<<endl;
   else if(n==2)
    cout<<first<<" "<<second<<endl;

        else
        {cout<<first<<" "<<second<<" ";
        for(int i=0; i<n-2; i++)
            {fibo=first+second;
            cout<<fibo<<" ";
            first=second;
            second=fibo;
        }

    }
    return 0;
}
