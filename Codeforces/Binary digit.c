#include<stdio.h>

long toBin(int);

int main()
{
    long bin;
    int d;

    printf(" Input any decimal number : ");
    scanf("%d",&d);
    bin = toBin(d);
    printf("\n The Binary value is : %ld\n\n",bin);

    return 0;
}
long toBin(int d)
{
    long bin=0,rem,f=1;
    while(d != 0)
    {
         rem = d % 2;
         bin = bin + rem * f;
         f = f *10;
         d = d/ 2;
    }
    return bin;
}

