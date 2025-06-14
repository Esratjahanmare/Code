#include<stdio.h>

int main()
{
    int n, r, sum = 0;

    scanf("%d", &n);

    int temp = n;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp /= 10;
    }
    if (n == sum)
    {
        printf("%d\n", sum);
        printf("YES\n");
    }
    else
    {
        printf("%d\nNO\n", sum);
    }

    return 0;
}
