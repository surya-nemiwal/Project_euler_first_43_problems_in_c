//counting sundays
#include<stdio.h>
int main()
{
    int i,j,p=2,ans=0;
    for(j=1900;j<2001;j++)
    {
        for(i=1;i<13;i++)
        {
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            {
                if(p==1)
                    {ans++;
                     printf("%d %d\n",i,j);
                    }
                p=(p+3)%7;
            }
            else if(i==2)
            {
                if(p==1)
                    {ans++;
                     printf("%d %d\n",i,j);
                    }
                if(j%4==0||j%400==0)
                    p=(p+1)%7;

            }
            else {
                    if(p==1)
                        {ans++;
                     printf("%d %d\n",i,j);
                    }
                    p=(p+2)%7;
                 }
        }
    }
    printf("the ans is %d\n",ans);
}
