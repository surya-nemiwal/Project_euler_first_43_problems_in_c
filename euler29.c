#include<stdio.h>
#include<math.h>
int prime(int k)
{
    int a,i;
    double b;
    b=(double)k;
    a=(int)sqrt(b);
    for(i=2;i<=a;i++)
        if(k%i==0)
            return 0;
    return 1;
}
int main()
{
    int i,j,k,count=0,tsum=0,temp,temp1,a[101],flag;
    for(i=0;i<101;i++)
        a[i]=0;
    for(i=2;i<101;i++)
    {
        if(prime(i)||a[i]==0)
          {
            tsum=tsum+99;
            printf("p%d %d  ",i,tsum);
          }
        else
        {
            temp1=a[i];
            temp=100/temp1;
            if(temp1==2)
                tsum=tsum+50;
            else
                for(k=temp+1;k<101;k++)
                {
                    j=2;
                    flag=0;
                    while(j<temp1&&flag==0)
                    {
                        if(k%j==0)
                            { flag=1;
                                if((k/j)*temp1>100)
                                    tsum++;
                            }
                        j++;
                    }
                    if(flag==0)
                        tsum++;
                }
            printf("p%d %d  ",i,tsum);
        }
        temp=i*i;
        count=2;
        while(temp<101)
        {
            a[temp]=count;
            temp=temp*i;
            count++;
        }
    }
    printf("%d",tsum);
    return 0;
}

