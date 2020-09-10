#include<stdio.h>
int binary(int a[],int b)
{
    int i=0;
    while(b>0)
    {
        if(b%2==0)
            a[i++]=0;
        else
            a[i++]=1;
        b=b/2;
    }
    return i;
}
int palindrome(int n)
{
    int i=0,j,s,a[20];
    for(j=0;j<20;j++)
        a[j]=0;
    j=binary(a,n);
    j--;
    while(i<j)
       {
          if(a[i]!=a[j])
            return 0;
            i++;
            j--;
       }
    return 1;

}

int main()
{
   int b=585,i,j,k,temp,sum=0;


    //printf("\n%d ",palindrome(11));
   for(i=1;i<10;i++)
   {
       if(palindrome(i))
             sum=sum+i;
       temp=i*10+i;
       if(palindrome(temp))
           { sum=sum+temp;
            //printf("%d\n",temp);
           }
   }
  //printf("%d",sum);
   for(i=1;i<10;i++)
     for(j=0;j<10;j++)
   {
       temp=i*100+j*10+i;
        if(palindrome(temp))
           { sum=sum+temp;
            printf("%d\n",temp);
           }
        temp=i*1000+j*100+j*10+i;
        if(palindrome(temp))
        {
            sum=sum+temp;
            printf("%d\n",temp);
        }
   }
   for(i=1;i<10;i++)
    for(j=0;j<10;j++)
      for(k=0;k<10;k++)
    {
        temp=i*10000+j*1000+k*100+j*10+i;
        if(palindrome(temp))
        {
            sum=sum+temp;
            printf("%d\n",temp);
        }
        temp=i*100000+j*10000+k*1000+k*100+j*10+i;
        if(palindrome(temp))
        {
            sum=sum+temp;
            printf("%d\n",temp);
        }
    }
    printf("\n\n%d  ",sum);

}
