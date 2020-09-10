#include<stdio.h>
#include<math.h>
#define size 5000
int prime[size];
int primeno(int k)
{
    int i,a;
    double k1;
    k1=(double)k;
    a=(int)sqrt(k1);
    for(i=2;i<=a;i++)
    {

        if(k%i==0)
            return 0;
    }
    return 1;
}
void factors(int k,int a[])
{
    int i=0,j=0,l,p,flag=1;
    p=prime[i];
    while(flag)
    {
        if(k%p==0)
            {
            a[j++]=p;
            k=k/p;
            }
        else
            i++;
            l=prime[i];
            if(l<=k&&l)
                p=l;
            else flag=0;
    }
}
int midprocess(int k, int r)
{
    int temp=1,i,j,sum=1;
    for(i=0;i<r;i++)
    {
        temp=temp*k;
        sum=sum+temp;
    }

    return sum;
}
int abundant(int data)
{
    int a[500],i,j,count=1,sum=1,ans;
    for(i=0;i<500;i++)
        a[i]=0;
    factors(data,a);
    i=0;
    while(a[i])
    {
        j=a[i];
        while(j==a[++i])
            count++;
        sum=sum*midprocess(j,count);
        count=1;
    }
    ans=sum-data;
    if(ans>data)
        return 1;
    else return 0;
}
int main()
{
     long int last=0;
    int sum[28124],i,j,k,x,y,abandant[28124],temp[28124],max;
    for(i=0;i<5000;i++)
        prime[i]=0;
    for(i=0;i<28124;i++)
       {
        abandant[i]=0;
        temp[i]=0;
        sum[i]=-1;
        }
    j=0;
    for(i=2;i<28124;i++)
        if(primeno(i))
        {
        prime[j++]=i;
        sum[i]=0;
        }
    j=0;
    for(i=2;i<28124;i++)
        if((x=sum[i])==-1)
        {
            if(abundant(i))
                {abandant[j++]=i;
                printf("%d ",i);
                }
        }
        max=j;
        for(i=0;i<max;i++)
            for(j=i;j<max;j++)
        {
            x=abandant[i]+abandant[j];
            if(x<28124)
                if(temp[x]==0)
              {
                temp[x]=1;
              }
        }
        for(i=0;i<28124;i++)
            if(!temp[i])
                {last= last+i;
               // printf("%d ",i);
                 }

        printf("\n%ld\n",last);

    return 0;
}

