#include<stdio.h>
int isprime(k)
{   int i,j=k/2,f=1;
    for(i=2;i<j&&f;i++)
        if(k%i==0)
            f=0;
    if(f)
        return 1;
    else return 0;
}
int quotient(k)
{
    int i,j=k/2;

    for(i=2;i<j;i++)
    {
        if(k%i==0)
            k=k/i;
    }
    return k;

}
void main()
{
    int i,f=1,j;
    for(i=2;i<21;i++)
    {
        if(isprime(i))
            f*=i;
        else if(f%i)
               {
                j=quotient(i);
                f=f*j;
               }
    }

    printf("%d",f);
}
