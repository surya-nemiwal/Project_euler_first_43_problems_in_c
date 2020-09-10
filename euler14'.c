#include<stdio.h>
int main()
{
    long long count=1,max=0,k,no,j;
    for(j=13;j<1000000;j++)
   {
       k=j;
       count=1;
    while(k!=1)
    {
        if(k%2==0)
            k/=2;
        else
            k=3*k+1;
        count++;
    }
    if(max<count)
        {
            max=count;
            no=j;
        }
  //  printf("%d\n",max);
   //printf("%d\n",no);
  }
   printf("%1ld\n",max);
   printf("%1ld\n",no);
   return 0;
}
