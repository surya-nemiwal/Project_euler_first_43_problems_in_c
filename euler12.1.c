#include<stdio.h>
#include<math.h>
void test(long k,int b[])
{
    int flag=1,a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,0},i=0,j=0,l,p;

    p=a[i];
    while(flag)
    {
        if(k%p==0)
            {
            b[j++]=p;
            k=k/p;
            }
        else
            i++;
            l=a[i];
            if(l<=k&&l)
                p=l;
            else flag=0;

    }
}
int factors(long a)
{
    //long a=64;
    int b[250],i=0,op,ans=1,count1=2,count=0;
    double c;
    for(i=0;i<250;i++)
        b[i]=0;
    test(a,b);
  //  op=b[i];
    for(i=0;(op=b[i])!=0;i++)
    {
    if(op==b[i+1])
    {
        while(op==b[i+1])
        {
            count1++;
            // printf("%d\n",count1);
            i++;

        }
       // if(count1>2)
         ans*=count1;
         count1=2;
    }
     else
         count++;
    }
   // printf("%d\n",ans);
    c=(double)count;
   // printf("%d\n",count);
    ans=ans*pow(2,c);
    return ans;
}
int main()
{
    long a=1,i=2;
    int ans,f=1;

  /*  for(a=2;a<223092870;a++)
    {
        ans=factors(a);
     //   printf("%ld\t%d\n",a,ans);
        if(ans>500)
            {
                printf("%ld\n",a);
                break;
            }
    }*/
    while(f)
    {
        ans=factors(a);
        if(ans>500)
            f=0;
        else
            {
                a=a+i;
                i++;
            }
    }
    printf("%ld\n",a);
    return 0;
}
