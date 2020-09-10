#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *p;
    char ch;
    int i,ans=1;
    p=fopen("euler40.txt","r");
    if(p==NULL)
    {
        printf("file cannot be opened\n");
        exit(0);
    }
    else
       i=1;
       while(i<1000001)
    {
        ch=fgetc(p);
        if(i==1||i==10||i==100||i==1000||i==10000||i==100000||i==1000000)
            ans=ans*(ch-'0');
        i++;
    }
    printf("%d\n",ans);
}
