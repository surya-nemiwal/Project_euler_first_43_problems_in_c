#include<stdio.h>
#include<string.h>
int main()
{
    char name[75000],temp[20],*word,arr[6000][15];
    long long ans=0;
    char skip[]="\",";
    int i=0,j=0,sum=0;
    FILE *ptr;
    ptr=fopen("euler22.txt","r");
    fscanf(ptr,"%s",name);
    printf("%s",name);
    printf("\n\n");
    word=strtok(name,skip);
    while(word!=NULL)
    {
       // printf("%s ",word);
       strcpy(temp,word);
       strcpy(arr[i],temp);
     //  printf("%s%d  ",arr[i],i);
       i++;
        word=strtok(NULL,skip);
    }
    for(i=0;i<5162;i++)
        for(j=0;j<5162-i;j++)
        {
        if(strcmp(arr[j],arr[j+1])>0)
        {
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],temp);
           // count++;
        }
        }
        j=0;
    for(i=0;i<5163;i++)
         {
        //i=937;
      //  printf("%s\n",arr[i]);
             strcpy(temp,arr[i]);
             while(temp[j]!='\0')
             {
                 sum=sum+temp[j]-64;
                 j++;
             }
             ans=ans+sum*(i+1);
             sum=j=0;
         }

        printf("%lld\n",ans);
      fclose(ptr);
}//5163

