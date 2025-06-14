#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i,cnt=0,n, j;

    scanf("%s%s", &a, &b);

    n= strlen(a);
    for(i=0, j=n-1; i<n; i++, j--)
    {

        if(a[i]==b[j])
            cnt = 1;
        else
        {
            cnt= 0;
            break;
        }

    }
    if(cnt == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
