#include<stdio.h>
#define s 20
void main()
{
    long long a[s][s],i=1,ans,j,sum=0,dig=0;
    for(i=0;i<s;i++)
    {
        a[0][i]=1;
        a[i][0]=1;
    }
    for(i=1;i<s;i++)
        for(j=1;j<s;j++)
            a[i][j]=a[i][j-1]+a[i-1][j];

  /*  for(i=0;i<s;i++)
        {
         for(j=0;j<s;j++)
            printf("%d  ",a[i][j]);
        printf("\n");
        }
  */
      for(i=0;i<s-1;i++)
        for(j=i+1;j<s;j++)
             sum=sum+a[i][j];
    sum=sum*2;

        for(i=0;i<s;i++)
            dig=dig+a[i][i];
    ans=sum+dig;

    printf("%lld\n",ans+1);

}
