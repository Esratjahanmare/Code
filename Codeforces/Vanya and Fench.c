#include<stdio.h>
int main()
{
    int  i,j=0, k=0,sum=0,n, h;

    scanf("%d %d", &n, &h);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
   i=0;
   while(i<n)
    {
        if(a[i]>h)
        {
            j=2;
            sum+=j;
        }
        else
        {

            k=1;
            sum=sum+k;
        }
        i++;
    }
        printf("%d\n", sum);
        return 0;
    }
