#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[15][15],b[15][15],i,j,k,l,temp;
    FILE *ptr;
    ptr=fopen("euler18.txt","r");
    if(ptr==NULL)
    {
        printf("file does not exist\n");
        exit(0);
    }
    else
        temp=0;
        for(i=0;i<15;i++)
        {
            temp++;
            for(j=0;j<temp;j++)
                fscanf(ptr,"%d",&a[i][j]);
        }
    temp=0;
    /*for(i=0;i<15;i++)
        {
            temp++;
               for(j=0;j<temp;j++)
                printf("%d ",a[i][j]);
            printf("\n");
         }*/
        b[0][0]=a[0][0];
     for(i=1;i<15;i++)
     {
         b[i][0]=a[i][0]+b[i-1][0];
         b[i][i]=a[i][i]+b[i-1][i-1];
     }
         for(i=2;i<15;i++)
         {
             for(j=1;j<i;j++)
             {
                 if(b[i-1][j-1]>=b[i-1][j])
                    b[i][j]=a[i][j]+b[i-1][j-1];
                 else
                    b[i][j]=a[i][j]+b[i-1][j];
             }
         }

    for(i=0;i<15;i++)
        {
            temp++;
               for(j=0;j<temp;j++)
                printf("%d ",b[i][j]);
            printf("\n");
         }
}





