#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100][100],b[100][100],i,j,k,l,temp;
    FILE *ptr;
    ptr=fopen("euler67.txt","r");
    if(ptr==NULL)
    {
        printf("file does not exist\n");
        exit(0);
    }
    else
        temp=0;
        for(i=0;i<100;i++)
        {
            temp++;
            for(j=0;j<temp;j++)
                fscanf(ptr,"%d",&a[i][j]);
        }
    temp=0;
    /*for(i=0;i<100;i++)
        {
            temp++;
               for(j=0;j<temp;j++)
                printf("%d ",a[i][j]);
            printf("\n");
         }*/
        b[0][0]=a[0][0];
     for(i=1;i<100;i++)
     {
         b[i][0]=a[i][0]+b[i-1][0];
         b[i][i]=a[i][i]+b[i-1][i-1];
     }
         for(i=2;i<100;i++)
         {
             for(j=1;j<i;j++)
             {
                 if(b[i-1][j-1]>=b[i-1][j])
                    b[i][j]=a[i][j]+b[i-1][j-1];
                 else
                    b[i][j]=a[i][j]+b[i-1][j];
             }
         }

   /*for(i=0;i<100;i++)
        {
            temp++;
               for(j=0;j<temp;j++)
                printf("%d ",b[i][j]);
            printf("\n");
         }*/
    printf("\n\n\n");
    temp=0;
    for(i=0;i<100;i++)
        if((b[99][i])>=temp)
            temp=b[99][i];

    printf("%d ",temp);
}






