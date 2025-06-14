#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

  double  res1 = log(a)*b;
  double res2= log(c)*d;

    if(res1>res2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
