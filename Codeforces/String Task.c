#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", &s);
    int l=strlen(s);
    strlwr(s);
    for(int i=0; i<l; i++)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            continue;
        }
        printf(".%c",s[i]);
    }
    printf("\n");
}
