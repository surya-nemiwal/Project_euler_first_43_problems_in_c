#include<stdio.h>
int main()
{
    FILE*ptr;


    char ch;
    int a[100][50],b[51],i=0,j,sum=0,carry=0;
    ptr=fopen("euler13.txt","r");
    if(ptr==NULL)
        printf("file does not exist\n");
    else
        printf("file opened successfully\n");
        for(i=0;i<100;i++)
            for(j=0;j<51;j++)
            {
                ch=fgetc(ptr);
                if(ch!=-1)
               { printf("%c",ch);
                if(ch!='\n')//&&ch!=-1)
                   a[i][j]=ch-'0';
                }
            }
        for(i=0;i<100;i++)
           { for(j=0;j<50;j++)
                printf("%d",a[i][j]);
            printf("\n");
           }
           for(j=49;j>-1;j--)
                {
                    for(i=0;i<100;i++)
                      sum=sum+a[i][j];
                sum+=carry;
                b[j+1]=sum%10;
                printf("%d ",b[j+1]);
                carry=sum/10;
                sum=0;


                }


       /* while((ch=fgetc(ptr))!=-1)
        {
           printf("%c",ch);
            if(ch!='\n')
               a[i++]=ch-'0';

        }
        fclose(ptr);
        for(i=50;i<0;i--)
          {  for(j=0;j<100;j++)
                {
                    sum=sum+a[(50*j)+(i-1)];
                }
                sum+=carry;
                b[i]=sum%10;
                printf("%d ",b[i]);
                carry=sum/10;
                sum=0;
        }
        */
        printf("\n");
            b[0]=carry;
            for(i=0;i<51;i++)
                printf("%d ",b[i]);

        return 0;
}
