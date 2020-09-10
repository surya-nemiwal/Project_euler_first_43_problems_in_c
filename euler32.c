#include<stdio.h>
int main()
{
    int a,b,i,j=0,k,c,d,e,ans[100],ab[10],temp,temp1,temp2,flag,sum=0;
    for(a=1;a<10;a++)
    {
        for(b=1;b<10;b++)
            if(b==a)
                continue;
            else for(c=1;c<10;c++)
                  if(c==b||c==a)
                       continue;
                  else for(d=1;d<10;d++)
                         if(d==c||d==b||d==a)
                             continue;
                         else  for(e=1;e<10;e++)
                                   if(e==d||e==c||e==b||e==a)
                                        continue;
                                    else {
                                        temp=(a*10+b)*(c*100+d*10+e);

                                        if(temp<10000)
                                      {
                                          temp2=temp;
                                          flag=1;
                                          for(i=0;i<10;i++)
                                                ab[i]=0;
                                            ab[a]=1;
                                            ab[b]=1;
                                            ab[c]=1;
                                            ab[d]=1;
                                            ab[e]=1;
                                            for(i=0;i<4&&flag;i++)
                                            {
                                              temp1=temp%10;
                                              if(ab[temp1]==1||temp1==0)
                                                    flag=0;
                                              else{
                                                ab[temp1]=1;
                                                temp=temp/10;
                                              }
                                            }
                                            if(flag)
                                            {
                                               //  printf("%d%d %d%d%d %d\n",a,b,c,d,e,temp2);
                                                 ans[j++]=temp2;
                                            }

                                      }

                                        temp=a*(b*1000+c*100+d*10+e);

                                        if(temp<10000)
                                        {
                                            flag=1;
                                            temp2=temp;
                                            for(i=0;i<10;i++)
                                                ab[i]=0;
                                            ab[a]=1;
                                            ab[b]=1;
                                            ab[c]=1;
                                            ab[d]=1;
                                            ab[e]=1;
                                            for(i=0;i<4&&flag;i++)
                                            {
                                              temp1=temp%10;
                                              if(ab[temp1]==1||temp1==0)
                                                    flag=0;
                                              else{
                                                ab[temp1]=1;
                                                temp=temp/10;
                                              }
                                            }
                                            if(flag)
                                             {
                                                //printf("%d %d%d%d%d %d\n",a,b,c,d,e,temp2);
                                                ans[j++]=temp2;
                                             }
                                        }

                                    }
    }
    for(i=0;i<j;i++)
        if(ans[i]==0)
            continue;
        else
       {
           sum=sum+ans[i];
           for(k=i+1;k<j;k++)
            if(ans[i]==ans[k])
               ans[k]=0;
        }
     printf("%d ",sum);
}






