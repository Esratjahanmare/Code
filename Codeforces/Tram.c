#include<stdio.h>
int main()
{

    int n, i,sum=0,max, j;

    scanf("%d", &n);
    int a[n];

    for(int m=0; m<n; m++)
    {
        scanf("%d %d", &i, &j);
        int max=sum;
        sum=((a[j-1])+(a[j])-(a[i]));
        if(max<sum)
            max=sum;
    }
    printf("%d\n", max);

    return 0;
}
