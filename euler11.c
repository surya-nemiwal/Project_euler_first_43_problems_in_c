#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[20][20],i,j,k,l;
    long long max=0,a1,a2,a3,a4;
    FILE *ptr;
    ptr=fopen("euler11.txt","r");
    if(ptr==NULL)
    {
        printf("file does not exist\n");
        exit(0);
    }
    else
        for(i=0;i<20;i++)
            for(j=0;j<20;j++)
    {
        fscanf(ptr,"%d",&a[i][j]);
    }
    //for(i=0;i<20;i++)
       //  {   for(j=0;j<20;j++)
       //         printf("%d ",a[i][j]);
        //    printf("\n");
        // }

    for(i=0;i<17;i++)
        for(j=0;j<17;j++)
    {
      //  a1=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
      //  if(max<a1)
        //    max=a1;
        a2=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
        if(max<a2)
            {
                max=a2;
                k=i;
                l=j;
            }
        a3=a[i][j+3]*a[i+1][j+2]*a[i+2][j+1]*a[i+3][j];
        if(max<a3)
            {
                max=a3;
                k=i;
                l=j;
            }
        //a4=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
        //if(max<a4)
        //    max=a4;
       // printf("%lld\n",max);



     }
     for(i=0;i<20;i++)
        for(j=0;j<17;j++)
       { a1=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
          if(max<a1)
             {
                max=a1;
                k=i;
                l=j;
            }
        }
    for(i=0;i<17;i++)
        for(j=0;j<20;j++)
       { a4=a[i][j]*a[i+1][j]*a[i+2][j]*a[i+3][j];
          if(max<a4)
             {
                max=a4;
                k=i;
                l=j;
            }
        }


    printf("%lld\n",max);
    printf("%d\t%d\n",k,l);

}








