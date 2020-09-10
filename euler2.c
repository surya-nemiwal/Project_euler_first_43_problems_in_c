#include<stdio.h>
void main()
{
    long a=1,b=2,c,sum=2;

    while(1)
    {
        c=a+b;
        if(c>4000000)
            break;
        printf("%d  ",c);
        a=b;
        b=c;
        if(c%2==0)
            sum+=c;
    }



    printf("%d",sum);

}
