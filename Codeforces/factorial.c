#include<stdio.h>

int main()
{
    int w,n,i, fact=1;

    scanf("%d", &w);

    while(w--)
    {
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            fact=fact*i;
        }
            printf("%d\n", fact);
            fact=1;

    }
        return 0;
}
