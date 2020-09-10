#include<stdio.h>
int main()
{
    long int a[200],b[200],c[200],i,j,k,x,y,sum,carry=0,sum1,index=2;
    for(i=0;i<199;i++)
    {
        a[i]=0;
        b[i]=-1;
        c[i]=-1;
    }
    a[199]=1;
    b[199]=1;
    while(b[88]==-1)//4352
    {
        i=199;
        carry=0;
        while((y=b[i])>-1)
        {
            x=a[i];
            sum=x+y+carry;
            carry=0;
            if(sum>999999999)
            {
                sum1=sum;
                sum=sum1%1000000000;
                carry=sum1/1000000000;

            }
            c[i]=sum;
            i--;
        }
        if(carry>0)
           c[i]=carry;
        index++;
        j=199;
         while(b[j]>-1)
         {
            // printf("%d",c[j]);
             a[j]=b[j];
             b[j]=c[j];
             c[j]=-1;
             j--;
         }

         while(c[j]>-1)
         {
            // printf("%d",c[j]);
             b[j]=c[j];
             c[j]=-1;
             j--;
         }
        for(j=j+1;j<200;j++)
            printf("%ld",b[j]);
        printf("  ");

    }
    printf("%ld ",index);
    return 0;
}
