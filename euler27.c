#include<stdio.h>
int primeno[21000];
int prime(int k)
{
    int b,i;
    double a;
    a=(double)k;
    b=(int)sqrt(a);
    for(i=2;i<=b;i++)
        if(k%i==0)
           return 0;
    return 1;
}
int test(int a,int b)
{
    int n=1,temp1;
    temp1=a+b+n;
    while(primeno[temp1])
    {
        n++;
        temp1=n*n+a*n+b;
    }
 return n;
}
void main()
{
    int a,b,a1,b1,n=0,max=0,temp1,temp2,temp3,temp4;
    primeno[0]=0;
    primeno[1]=0;

    for(a=2;a<21000;a++)
        if(prime(a))
           primeno[a]=1;
        else primeno[a]=0;
    for(a=0;a<1000;a++)
        for(b=2;b<=1000;b++)
    {
        if(primeno[b])
        {
         temp1= test(a,b);
         temp2=test(a,-b);
         temp3=test(-a,b);
         temp4=test(-a,-b);
         if(temp1>max)
            {
                max=temp1;
                a1=a;
                b1=b;
            }
         if(temp2>max)
            {
                max=temp2;
                a1=a;
                b1=-b;
            }
        if(temp3>max)
            {
                max=temp3;
                a1=-a;
                b1=b;
            }
        if(temp4>max)
            {
                max=temp3;
                a1=-a;
                b1=-b;
            }
        }
    }
    printf("%d %d %d %d\n",max,a1*b1,a1,b1);

}
