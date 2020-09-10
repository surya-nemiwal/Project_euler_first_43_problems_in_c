#include<stdio.h>
#include<string.h>
int tri[10000];
int check(char name[])
{
    int sum=0,i=0,temp;
    char ch;
    while((ch=name[i])!='\0')
    {
        temp=(int)ch-'@';
        sum=sum+temp;
        i++;
    }
    if(tri[sum]==1)
        return 1;
    else return 0;
}
int main()
{
    FILE *p;
    int i,j,count=0;
    char *name,temp[30],file[1000000],ch;
    for(i=0;i<10000;i++)
        tri[i]=0;
    i=1;
    j=1;
    while(i<10000)
    {
       // printf("%d  ",i);
        tri[i]=1;
        j++;
        i=i+j;
    }
    p=fopen("euler42.txt","r");
    if(p==NULL)
        printf("file cannot be opened\n");
    else
    {
      // printf("in the else block\n");
     /*  i=0;
        while((ch=getc(p))!='\0')
            file[i++]=ch;
        file[i]='\0';
        printf("%s\n",file);*/
        fscanf(p,"%s",file);
       // printf("%s",file);
       name=strtok(file,"'\",");
      // strcpy(temp,name);
       while(name!=NULL)
        {
            strcpy(temp,name);
            printf("%s ",temp);
            name=strtok(NULL,"'\",");
            if(check(temp))
                count++;

        }
        printf("\n%d\n",count);
    fclose(p);
    }


}

