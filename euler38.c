#include<stdio.h>
int max=0,num;
int pandigit(int n)
{
    int a[10],i,temp,count=0;
    for(i=0;i<10;i++)
        a[i]=0;

    while(n>0)
    {
        temp=n%10;
        n=n/10;
        if(a[temp]==1||temp==0)
            return 0;
        else a[temp]=1;
    }
    return 1;
}
void make9digit(int n)
{
   int temp1,i,temp,count=0;
    i=1;
    while(1)
    {
       temp= n*i;
        if(temp<10)
            count++;
        else if(temp<100)
             count=count+2;
        else if(temp<1000)
             count=count+3;
        else if(temp<10000)
              count=count+4;
        else if(temp<100000)
               count=count+5;
       // printf("%d %d\n",temp,count);
        i++;
        if(count>=9)
            break;

    }
    if(count==9)
      { temp=n*(i-1);
     // printf("%d\n",temp);
        for(i=i-2;i>0;i--)
        {
            temp1=n*i;
            if(temp<10)
                temp=temp1*10+temp;
            else if(temp<100)
                temp=temp1*100+temp;
            else if(temp<1000)
                 temp=temp1*1000+temp;
            else if(temp<10000)
                  temp=temp1*10000+temp;
            else if(temp<100000)
                   temp=temp1*100000+temp;
            else if(temp<1000000)
                   temp=temp1*1000000+temp;
            else if(temp<10000000)
                   temp=temp1*10000000+temp;
            else if(temp<100000000)
                   temp=temp1*100000000+temp;
           // printf("%d  %d\n",temp,i);
        }
        if(pandigit(temp))
            if(temp>max)
             { max=temp;
             num=n;
             }
      }
     // printf("%d",temp);

}
int main()
{
    int i;
    for(i=2;i<10000;i++)
        make9digit(i);
    printf("%d  %d\n",max,num);

}
