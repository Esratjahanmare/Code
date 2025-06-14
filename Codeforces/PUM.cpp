#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a=1;
    string s="PUM";

    cin>>n;
    while(n--)
    {
        {printf("%d ", a++);
         printf("%d ", a++);
          printf("%d ", a++);
          printf("PUM\n");
        }
        if((a++)%4==0)
            continue;
    }

    return 0;
}
