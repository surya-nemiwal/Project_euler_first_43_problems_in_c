#include<stdio.h>
#include<conio.h>
int factor(long long k)
{
    long long a,i;
    int count=0;
    a=(k/2)+1;
    for(i=1;i<a;i++)
    {
        if(k%i==0)
            count++;
    }
    return count+1;
}
int main()
{
    long long a=1,i=2;
    int count,f=1,temp;
    while(f)
    {
        //temp=factor(28);
        count=factor(a);
        if(count>500)
            f=0;
        else
            {
                a=a+i;
                i++;
            }
    }
    printf("%lld\n",a);
    //printf("%d\n",temp);
    printf("%d\n",count);

    return 0;
}
