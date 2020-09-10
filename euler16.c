#include<stdio.h>
#define z 1000
int main()
{
    int a[1000];
   int i,j,head,store,store1,carry=0,sum=0;
   for(i=0;i<1000;i++)
        a[i]=-1;
   a[999]=2;
   for(i=1;i<z;i++)
   {
       j=999;
       while(a[j]!=-1)
       {
           store=2*a[j]+carry;
           store1=store;
      //  printf("store %d\n",store);
           if(store>9)
           {
               store1=store%10;
               // printf("instore %d\n",store);
                //printf("instore1 %d\n",store1);
               carry=store/10;
           }
           else carry=0;
           a[j]=store1;
           j--;
           //store=0;
       }
       if(carry)
        {
          a[j]=carry;
          head=j;
          carry=0;
        }
       else head=j+1;
   }
   printf("head %d\n",head);
   for(i=head;i<1000;i++)
    {
        printf("%d",a[i]);
        sum=sum+a[i];
    }
   printf("\n%d",sum);
   return 0;
}
