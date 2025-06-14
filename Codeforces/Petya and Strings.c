
#include<stdio.h>

int main()
{
    char s1[101], s2[102];

    scanf("%s", &s1);
    scanf("%s", &s2);

    strlwr(s1);
    strlwr(s2);
int     v=strcmp(s1,s2);

    printf("%d\n",v);

    return 0;
}
