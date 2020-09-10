#include<stdio.h>
void main()
{
    long int i,j,dsum=1,temp;
    for(i=1;i<501;i++)
    {
       temp=2*i+1;
       temp=temp*temp;
       dsum=dsum+temp;
       for(j=0;j<3;j++)
       {
           temp=temp-2*i;
           dsum=dsum+temp;
       }
    }
    printf("%ld\n",dsum);
}
