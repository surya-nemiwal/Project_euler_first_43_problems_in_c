#include<stdio.h>
#include<math.h>
int prime(int k)
{
    int i,b;
    double a;
    a=(double)k;
    b=(int)sqrt(a);
    for(i=2;i<=b;i++)
    {
        if(k%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int i,n,M,a[1000],flag=1,max=0,r=0,count;
    for(n=2;n<1000;n++)
        if(prime(n))
    {

        for(i=0;i<1000;i++)
            a[i]=0;
        count=0;
        flag=1;
        a[1]=1;
        i=1;
        while(flag)
      {
        while(i<n)
            i=i*10;
        i=i%n;
        if(i==0||a[i]==1)
            flag=0;
        else
        {
            a[i]=1;
            i=i*10;
        }
      }
      if(i>0)
      {
        r=i*10;
        flag=1;
          while(flag)
          {
              while(r<n)
              {
                  r=r*10;
                count++;
              }
              r=r%n;
              count++;
            if(r==i)
                {
                    flag=0;
                    r=r*10;

                }
            else
                r=r*10;
          }
          printf("%d %d    ",n,count);
        if(count>max)
            {max=count;
             M=n;
            }

      }
    }

    printf("\n\n%d %d\n",M,max);
}
