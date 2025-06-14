#include<stdio.h>
int main()
{
    int n, a, b, c, a1= 0, b1=0, c1=0;

    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d %d", &a, &b, &c);

        a1=a1+a;
        b1=b1+b;
        c1=c1+c;
    }
        if(a1==0 && b1==0 && c1==0)
            printf("YES\n");
        else
            printf("NO\n");
    return 0;

}
