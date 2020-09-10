#include<stdio.h>
#include<math.h>
int prime(long k)
{
    double a;
    long i,j;
    a=(double)k;
    j=(long)sqrt(a);
    for(i=2;i<=j;i++)
    {
        if(k%i==0)
            return 0;
    }
    return 1;
}
void main()
{
    long a,i ,b;
    long long sum=0;
    printf("%d\n",prime(23));
    for(i=2;i<2000000;i++)
    {
        if(prime(i))
            sum+=i;
    }
    printf("%lld\n",sum);
}




