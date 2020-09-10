#include<stdio.h>
#include<math.h>
int prime(long k)
{
    long i,a;
    double k1;
    k1=(double)k;
    a=(long)sqrt(k1);
    for(i=2;i<=a;i++)
    {

        if(k%i==0)
            return 0;
    }
    return 1;
}
void main()
{
    long i=2,j,a,b;
    int count=1;
    while(count<10001)
    {
        i++;
        if(prime(i))
           { printf("  %ld\n",i);
            count++;
           }
    }
    printf("    %ld\n",i);
}
