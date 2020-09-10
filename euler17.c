#include<stdio.h>
void main()
{
    int a[]={0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
    int b[]={0,0,6,6,5,5,5,7,6,6},x,y,z,temp,i=100,ans=0,j,k;
    for(i=1;i<1000;i++)
    {
        j=i;
        temp=0;
        x=j%10;
        j=j/10;
        y=j%10;
        j=j/10;
        z=j%10;
        if(y==1)
            temp=a[x+10];
        else
            temp=a[x]+b[y];
       // printf("%d\n",temp);
         if(z>0)
            temp=temp+a[z]+10;
         if(x==0&&y==0)
            temp=temp-3;
         ans=ans+temp;
    }
    ans=ans+11;
    printf("%d",ans);
}
