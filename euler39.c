#include<stdio.h>
#include<stdlib.h>


int main()
{
   int s[1001],i,j,k,p,temp,temp1,temp2,count,max=0,num;
   for(i=1;i<1001;i++)
       s[i]=i*i;

   for(p=3;p<1001;p++)
    {

        count=0;
        temp=p/2;
        for(i=1;i<temp;i++)
        {
            for(j=i+1;j<p;j++)
            {
                temp1=i+j;
                k=p-temp1;
                if(k>j)
                  if(s[i]+s[j]==s[k])
                    count++;
               // if(k>j)
                   // printf("%d %d %d\n",i,j,k);
            }
        }
        if(count>max)
        {
            max=count;
            num=p;
        }

    }
    printf("%d  %d\n",max,num);

}
