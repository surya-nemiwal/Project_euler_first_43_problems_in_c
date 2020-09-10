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
    int *p,i,t,n=0,temp1,temp2,flag1,flag2,sum=0;
    p=(int*)calloc(1000000,sizeof(int));
    for(i=2;i<1000000;i++)
        if(prime(i))
            *(p+i)=1;

    //
   for(i=11;i<1000000&&n<12;i++)
   {
        //if(prime(i))
        if(*(p+i)==1)
        {
            //*(p+i)=1;
            //printf("%d  \n",i);
            temp1=i;
            temp2=i%10;
            flag1=1;
            flag2=1;
            while(flag1==1&&temp1>9)
            {
                temp1=temp1/10;
               // printf("%d  \n",temp1);
                 if(*(p+temp1)!=1)
                    {
                    flag1=0;
                   // printf("flag1 made zero\n");
                    }
            }
            if(flag1==1)
            {
                t=10;
                while(flag2&&temp2!=i)
                {
                    if(!*(p+temp2))
                        flag2=0;
                    t=t*10;
                    temp2=i%t;
                }

            }
            if(flag1&&flag2)
            {

                sum=sum+i;
                n++;
                printf("%d%d\n",i,n);
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}





