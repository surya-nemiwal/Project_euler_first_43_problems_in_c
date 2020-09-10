#include<stdio.h>
int gcd(int a, int b)
{
    int i,j,k;
    i=a;
    j=b;
    while(j>0)
    {
        k=i%j;
        i=j;
        j=k;
    }
    return i;
}
int main()
{
    int i,j,k,l,m,n,a,b,c,d,x,y,z,temp,num=1,den=1;
    for(i=11;i<100;i++)
        for(j=11;j<100;j++)
    {
        if(i%10==0||j%10==0||i==j)
            continue;
        else
           {
              // printf("     %d  %d\n",i,j);
              z=gcd(i,j);
              x=i/z;
              y=j/z;
               k=i;
               a=k%10;
               b=k/10;
               k=j;
               c=k%10;
               d=k/10;
               if(a==d)
                 {
                     l=gcd(b,c);
                     m=b/l;
                     n=c/l;

                     if(m==x&&n==y&&m<n)
                    {
                        printf("%d   %d\n",i,j);
                        num=num*m;
                        den=den*n;
                     }
                 }
              else if(a==c)
                 {
                     l=gcd(b,d);
                     m=b/l;
                     n=d/l;
                     if(m==x && n==y && m<n)
                        {
                        printf("%d   %d\n",i,j);
                        num=num*m;
                        den=den*n;
                     }
                 }
            else if(b==c)
                 {
                     l=gcd(a,d);
                     m=a/l;
                     n=d/l;

                     if(m==x&&n==y&&m<n)
                        {
                        printf("%d   %d\n",i,j);
                        num=num*m;
                        den=den*n;
                     }
                 }
            else if(b==d)
                 {
                      l=gcd(a,c);
                     m=a/l;
                     n=c/l;

                     if(m==x&&n==y&&m<n)
                        {
                        printf("%d   %d\n",i,j);
                        num=num*m;
                        den=den*n;
                        }
                 }



           }
    }
    l=gcd(num,den);
    l=den/l;
    printf("\n\n%d",l);
}
