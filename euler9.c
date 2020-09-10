#include<stdio.h>
#include<math.h>
int main()
{
    double i,j,k,p1,p2,p3,s,p;
    for(i=1;i<1000;i++)
    {
        p1=pow(i,2);
        for(j=1;j<1000;j++)
        {
            k=1000-i-j;
            if(i<j&&j<k)
            {
            p2=pow(j,2);
            p3=pow(k,2);
            s=p1+p2;
          //  printf("%lf\t%lf\t%lf\n",i,j,k);
            if(s==p3)
            {
                printf("%lf\t%lf\t%lf\n",i,j,k);
                p=i*j*k;
                printf("%lf\n",(p));
                break;
            }
            }
        }
    }
    return 0;
}
