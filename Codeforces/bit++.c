
#include<stdio.h>
int main()
{
    int n, sum=0;
    char s[4];

    scanf("%d",&n);

    while(n--)
    {
        scanf("%s", &s);

           if(s[1]=='+')
           sum++;
           else
            sum--;
    }
    printf("%d\n", sum);

    return 0;
}
