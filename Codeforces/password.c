
#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<=5; i++)
    {
        scanf("%d", &i);
        if(i!=1999)
        {
            printf("Wrong\n");
        }
        else
        {
            printf("Correct\n");
            break;
        }
    }


   return 0;
}

