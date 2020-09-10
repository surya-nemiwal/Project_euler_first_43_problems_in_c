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
int factsum(int data)
{
    int a[1000],i=0,j=0,k,x,y,c1=1,c2=1,a1[500],a2[500],m,n,ans[500],limit,sum=0;
    for(i=0;i<1000;i++)
        a[i]=0;
    for(i=0;i<500;i++)
    {
        a1[i]=0;
        a2[i]=0;
        ans[i]=0;
    }
    factors(data,a);
    i=0;
    x=a[i];
    while(x==a[++i])
        c1++;
    y=a[i];
    while(y==a[++i])
        c2++;
    a1[0]=1;
    a2[0]=1;
    for(j=1;j<=c1;j++)
        a1[j]=a1[j-1]*x;
    for(j=1;j<=c2;j++)
        a2[j]=a2[j-1]*y;
    i--;
    if(y==0)
    {
        for(j=0;j<c1;j++)
        {
       // printf("\t%d\n",a1[j]);
        sum=sum+a1[j];
        }
    }
    else
    {
        while(y)
            {
                limit=0;
                for(j=0;j<=c1;j++)
                {
                    m=a1[j];
                    for(k=0;k<=c2;k++)
                        {
                            n=m*a2[k];
                         if(n<data)
                           ans[limit++]=n;
                        }
                }
                c1=limit-1;
                for(j=0;j<500;j++)
                {
                    a1[j]=0;
                    a2[j]=0;
                }
                for(j=0;j<=c1;j++)
                    a1[j]=ans[j];
                c2=1;
               if(y=a[++i])
                {  while(y==a[++i])
                        c2++;
                a2[0]=1;
                for(j=1;j<=c2;j++)
                 a2[j]=a2[j-1]*y;

                }

            }
            for(j=0;j<=c1;j++)
            {
              //  printf("\t%d\n",a1[j]);
                sum=sum+a1[j];
            }
    }

    return sum;
}
int main()
{
     long int last=0;
    int sum[28124],i,j=0,k,x,y,c1,abandant[28124],temp[28124],max;
    for(i=0;i<5000;i++)
        prime[i]=0;
    for(i=0;i<28124;i++)
       {
        abandant[i]=0;
        temp[i]=0;
        sum[i]=-1;
        }

    for(i=2;i<28124;i++)
        if(primeno(i))
        {
        prime[j++]=i;
        sum[i]=0;
        }
    for(i=2;i<28124;i++)
        if((x=sum[i])==-1)
        {
            c1=factsum(i);
            sum[i]=c1;
            printf("%d %d    ",i,c1);
        }

        j=0;
    for(i=2;i<28124;i++)
        {
            x=sum[i];
         if(x>i)
            {abandant[j++]=i;
          //  printf("%d ",i);
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
        i=0;
        printf("\n\n");
        for(i=0;i<28124;i++)
            if(!temp[i])
                {last= last+i;
                //printf("%d ",i);
                 }

        printf("\n%ld\n",last);


   // for(i=0;i<j;i++)
    //    printf("%d    ",abandant[i]);


    return 0;
}

