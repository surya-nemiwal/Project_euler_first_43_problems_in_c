#include<stdio.h>
int main()
{
    int a[]={0,1,32,243,1024,3125,7776,16807,32768,59049},i,temp,tsum,temp1,ans=0;
    for(i=11;i<354295;i++)
    {
        temp=i;
        tsum=0;
        while(temp>0)
        {
            temp1=temp%10;
            tsum=tsum+a[temp1];
            temp=temp/10;
        }
        if(i==tsum)
           ans=ans+i;
    }
    printf("%d",ans);
}
