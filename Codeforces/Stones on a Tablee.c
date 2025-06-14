
#include<stdio.h>
int main()
{
    int i,cnt=0, n;
   scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    for(i=0; i<n; i++)
    {

        if(s[i]==s[i+1])
            cnt++;
    }
    printf("%d\n", cnt);

    return 0;

}
