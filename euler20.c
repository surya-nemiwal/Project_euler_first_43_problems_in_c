#include<stdio.h>
int main()
{
    int fact[1000],sum=0;
    int i,j,store,store1,carry=0,head,k;
    for(i=0;i<1000;i++)
    {
        fact[i]=-1;
    }
    fact[999]=1;
    for(i=2;i<11;i++)
    {
        j=999;
        while(fact[j]!=-1)
        {
            store=i*fact[j]+carry;
           // printf("%d\n",store);
            carry=0;
            if(store>9)
            {
                store1=store%10;
                carry=store/10;
                fact[j]=store1;
                j--;
            }
            else
            {
                fact[j]=store;
                j--;
            }

        }
        if(carry)
        {
           // printf("%d\t%d\t%d\n",i,j,carry);
           while(carry)
           {
             fact[j--]=carry%10;
             carry=carry/10;
           }
        }
        carry=0;
        head=j+1;
        for(k=head;k<1000;k++)
        {
        printf("%d",fact[k]);
       // sum=sum+fact[i];
        }
        printf("\t%d   %d\n",i,head);
    }
   // printf("           %d\n",head);
    for(i=head;i<1000;i++)
    {
        printf("%d",fact[i]);
        sum=sum+fact[i];
    }
   printf("\n%d",sum);
    return 0;
}

