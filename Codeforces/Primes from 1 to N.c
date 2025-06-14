#include<stdio.h>
//using namespace std;

int main()
{
    int n, i;

   scanf("%d", &n);

    for(i=2; i<n; i++)
    {
        int cnt=0;
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                cnt=1;
                break;
            }
        }
        if(cnt==0)
       {
           printf("%d ",i);
       }
    }

    return 0;
}
