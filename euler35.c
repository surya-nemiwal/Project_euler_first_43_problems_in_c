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
  int *p,i,j,a,b,c,d,e,f,count=0,t,t1,t2,t3,t4,t5,temp;
  p=(int)calloc(1000000,sizeof(int));

  for(i=2;i<1000000;i++)
    {
      if(prime(i))
          *(p+i)=1;
      else
          *(p+i)=0;
    }

   //for(j=0;j<10;j++)
    //{
        //t=100000*j;
        for(i=2;i<1000000;i++)
        if(*(p+i))
          {
              temp=i;
              if(temp<10)
                    count++;
            else if(temp<100)
              {

                a=temp%10;
                b=temp/10;
                t1=a*10+b;
                if(*(p+t1))
                    count++;
              }
              else if(temp<1000)
              {
                  a=temp%10;
                  temp=temp/10;
                  b=temp%10;
                  c=temp/10;
                  t1=a*100+c*10+b;
                  t2=b*100+a*10+c;
                  if(*(p+t1)&&*(p+t2))
                        count++;
              }
              else if(temp<10000)
              {
                  a=temp%10;
                  temp=temp/10;
                  b=temp%10;
                  temp=temp/10;
                  c=temp%10;
                  d=temp/10;
                  t1=a*1000+d*100+c*10+b;
                  t2=b*1000+a*100+d*10+c;
                  t3=c*1000+b*100+a*10+d;
                  if(*(p+t1)&&*(p+t2)&&*(p+t3))
                        count++;
              }
              else if(temp<100000)
              {
                  a=temp%10;
                  temp=temp/10;
                  b=temp%10;
                  temp=temp/10;
                  c=temp%10;
                  temp=temp/10;
                  d=temp%10;
                  e=temp/10;
                  t1=a*10000+e*1000+d*100+c*10+b;
                  t2=b*10000+a*1000+e*100+d*10+c;
                  t3=c*10000+b*1000+a*100+e*10+d;
                  t4=d*10000+c*1000+b*100+a*10+e;
                  if(*(p+t1)&&*(p+t2)&&*(p+t3)&&*(p+t4))
                        count++;
              }
              else if(temp<1000000)
              {
                  a=temp%10;
                  temp=temp/10;
                  b=temp%10;
                  temp=temp/10;
                  c=temp%10;
                  temp=temp/10;
                  d=temp%10;
                  temp=temp/10;
                  e=temp%10;
                  f=temp/10;
                  t1=a*100000+f*10000+e*1000+d*100+c*10+b;
                  t2=b*100000+a*10000+f*1000+e*100+d*10+c;
                  t3=c*100000+b*10000+a*1000+f*100+e*10+d;
                  t4=d*100000+c*10000+b*1000+a*100+f*10+e;
                  t5=e*100000+d*10000+c*1000+b*100+a*10+f;
                  if(*(p+t1)&&*(p+t2)&&*(p+t3)&&*(p+t4)&&*(p+t5))
                      count++;
              }
          }

    //}
    printf("%d",count);
    return 0;
}
