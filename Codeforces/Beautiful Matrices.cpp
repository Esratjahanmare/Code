#include<stdio.h>
int main()
{
    int i, j, row, col, x, y, sum = 0, a[10][10];

    for(i = 1; i < 6; i++)
    {
        for(j = 1; j < 6; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 1; i < 6; i++)
    {
        for(j = 1; j < 6; j++)
        {
            if(a[i][j] != 0)
            {
                row = i;
                col = j;
                break;
            }
        }
    }

    if(row >= 3)
    {
        x = row - 3;
    }
    else
    {
        x = 3 - row;
    }

    if(col >= 3)
    {
        y = col - 3;
    }
    else
    {
        y = 3 - col;
    }

    sum = x + y;

    printf("%d\n", sum);

    return 0;
}

