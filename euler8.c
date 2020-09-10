#include<stdio.h>

int main()
{
    FILE *ptr;
    char ch;
    int a[1000],i=0,j,j1;
    long long max=0,num;
    ptr = fopen("euler8.txt","r");
    if(ptr==NULL)
        printf("file does not exist\n");
    else printf("file opened\n");
    while((ch=fgetc(ptr))!=-1)
       {
         //  printf("%c",ch);
           if(ch!='\n')
           a[i++]=ch-'0';

       }
       fclose(ptr);
      //  printf("\n\n\n");
   // for(i=0;i<1000;i++)
   //    printf("%d",a[i]);
   //  printf("\n\n\n");
       for(i=0;i<=987;i++)
        { num=1;
            for(j=i;j<=i+12;j++)
            {
              num=num*a[j];
            }
            printf("%lld\n",num);
            if(num>max)
              {
                   max=num;
              }
        }
        printf("%lld\n",max);
     return 0;
}
