#include<stdio.h>
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
   int two[601],three[401],a[101],i,j,k,psum=0,temp,count;
   for(i=0;i<101;i++)
        a[i]=0;
   for(i=0;i<401;i++)
   {
       two[i]=0;
       three[i]=0;
   }
   for(i=401;i<601;i++)
        two[i]=0;
   for(i=1;i<7;i++)
   {
       for(j=2;j<101;j++)
       {
           temp=i*j;
           if(two[temp]==0)
           {
               psum++;
               two[temp]=1;
           }
       }
        printf("%d %d   ",i,psum);
   }
   for(i=1;i<5;i++)
   {
       for(j=2;j<101;j++)
       {
           temp=i*j;
           if(three[temp]==0)
           {
               psum++;
               three[temp]=1;
           }
       }
         printf("%d %d   ",i,psum);
   }
   for(i=5;i<101;i++)
   {
       if(i==8||i==9||i==16||i==27||i==32||i==64||i==81)
         continue;
       else
       {
            if(prime(i)||a[i]==0)
          {
            psum=psum+99;
            printf("p%d %d  ",i,psum);
          }
            else if(a[i]==2)
            {
                psum=psum+50;
                printf("p%d %d  ",i,psum);
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
   }
   printf("\n\n%d",psum);
}
