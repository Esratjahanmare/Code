#include<stdio.h>
int main()
{
    int n, a, pos = 0, neg=0, evn=0, odd=0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &a);
        if(a%2==0)
            evn++;
        if(a%2!=0)
            odd++;
        if(a<0)
            neg++;
        if(a>0)
            pos++;

    }
    printf("Even: %d\n", evn);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);

}
