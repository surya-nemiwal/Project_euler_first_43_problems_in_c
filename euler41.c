#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,a;
    double b;
    b=(double)n;
    a=(int)sqrt(b);
    for(i=2;i<=a;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int ispandigit(int n)
{
    int a[10],i,temp,max=1;
    for(i=0;i<10;i++)
        a[i]=0;
    while(n>0)
    {
        temp=n%10;

        n=n/10;
        if(a[temp]==1||temp==0)
            return 0;
        a[temp]=1;
        if(temp>max)
            max=temp;
    }
    for(i=1;i<=max;i++)
        if(a[i]==0)
            return 0;
    return 1;

}
int main()
{
    int i;
    for(i=999999999;i>1;i--)
        if(ispandigit(i))
            if(prime(i))
                break;
    printf("%d\n",i);

}
