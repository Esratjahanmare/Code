

#include<stdio.h>
int main()

{
    int n, row, col;

   printf("Enter N=");
   scanf("%d", &n);

   for(row=n; row>=1; row--)
   {
         for(col=1; col<=n-row; col++)
        printf("   ");

       for(col=1; col<=2*row-1; col++)
        printf("  %d", col);

       printf("\n");
   }
    for(i=1; i<=n; i++)
    {
        for(j=n-1; j>=i; j--)
            {cout<<" ";
    }

    for(int z=1; z<(i*2); z++)
    {
            cout<<'*';
        }
        cout<<endl;
    }
   return 0;

}

