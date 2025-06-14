#include<stdio.h>
int main()

{
    int n, a, b, c, cnt = 0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d %d", &a, &b, &c);

       int k = a+b+c;

       if(k>=2)
       {
           cnt++;
       }

    }
     printf("%d", cnt);

    return 0;
}
