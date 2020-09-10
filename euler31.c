#include<stdio.h>
int lcm(int a, int b)
{
    int c,a1,b1;
    a1=a;
    b1=b;
    while(b>0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    return (a1*b1)/a;
}

int two(int s,int a, int b)
{
    int temp;
  if(s>a&&a>b)
    if(s%a==0)
        if(a%b==0)
            {
            temp=s/a-1;
            return temp;
            }
        else
            {
                temp=lcm(a,b);
                return (s/temp)-1;
            }
    else
    {
     //  if(a%b==0)
         return s/a;
    }
return 0;
}
int three(int s,int a,int b,int c)
{
    int temp,sum=0,temp1;
        temp=s-a;
        temp1=b+c;
        while(temp>=temp1)
        {
            sum=sum+two(temp,b,c);
            temp=temp-a;
        }
        return sum;

}
int four(int s,int a,int b,int c,int d)
{
     int temp,sum=0,temp1;
        temp=s-a;
        temp1=b+c+d;
        while(temp>=temp1)
        {
            sum=sum+three(temp,b,c,d);
            temp=temp-a;
        }
        return sum;

}
int five(int s,int a,int b,int c,int d,int e)
{
     int temp,sum=0,temp1;
        temp=s-a;
        temp1=b+c+d+e;
        while(temp>=temp1)
        {
            sum=sum+four(temp,b,c,d,e);
            temp=temp-a;
        }
        return sum;

}
int six(int s,int a,int b,int c,int d,int e,int f)
{
     int temp,sum=0,temp1;
        temp=s-a;
        temp1=b+c+d+e+f;
        while(temp>=temp1)
        {
            sum=sum+five(temp,b,c,d,e,f);
            temp=temp-a;
        }
        return sum;

}
int seven(int s,int a,int b,int c,int d,int e,int f,int g)
{
     int temp,sum=0,temp1;
        temp=s-a;
        temp1=b+c+d+e+f+g;
        while(temp>=temp1)
        {
            sum=sum+six(temp,b,c,d,e,f,g);
            temp=temp-a;
        }
        return sum;
}

int main()
{
    int s[]={100,50,20,10,5,2,1},a,b,c,d,e,f,g,sum=0,temp;
    for(a=0;a<7;a++)
    {
        sum++;
        for(b=a+1;b<7;b++)
        {
            temp=two(200,s[a],s[b]);
         sum=sum+temp;
         printf("%d  %d  %d\n",s[a],s[b],temp);
         for(c=b+1;c<7;c++)
           {
               temp=three(200,s[a],s[b],s[c]);
            sum=sum+temp;

            for(d=c+1;d<7;d++)
            {
                temp=four(200,s[a],s[b],s[c],s[d]);
                sum=sum+temp;
              //  printf("   %d  %d  %d  %d  %d\n",s[a],s[b],s[c],s[d],temp);
                for(e=d+1;e<7;e++)
                {
                    temp=five(200,s[a],s[b],s[c],s[d],s[e]);
                    sum=sum+temp;
                    printf("   %d  %d  %d  %d  %d   %d\n",s[a],s[b],s[c],s[d],s[e],temp);
                    for(f=e+1;f<7;f++)
                    {
                        temp=six(200,s[a],s[b],s[c],s[d],s[e],s[f]);
                        sum=sum+temp;
                        printf("      %d  %d  %d  %d  %d   %d    %d\n",s[a],s[b],s[c],s[d],s[e],s[f],temp);
                        for(g=f+1;g<7;g++)
                        {
                            temp=seven(200,s[a],s[b],s[c],s[d],s[e],s[f],s[g]);
                             printf("         %d  %d  %d  %d  %d   %d   %d   %d\n",s[a],s[b],s[c],s[d],s[e],s[f],s[g],temp);
                            sum=sum+temp;
                        }
                    }
                }
            }
           }
        }
    }
 printf("%d ",sum);
}
