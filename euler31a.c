#include<stdio.h>

int position2(int j,int a, int b)
{
    while(b%a!=0)//check if a can fill the places of b
        b=2*b;
    if(a+b>j)
        return 0;
    else if(j%b==0)
          return j/b-1;
    else return j/b;

}
int position3(int j, int a, int b, int c)
{
    int t=0,temp,count=0;
    t=t+c;
    while(j>c)
    {
       temp=position2(t,a,b);
       count=count+temp;
       //printf("%d %d %d %d\n",a,b,t,temp);
       j=j-c;
       t=t+c;

    }
    return count;
}
int position4(int j, int a, int b, int c, int d)
{
    int t=0,temp,count=0;
    t=t+d;
    while(j>d)
    {
        temp=position3(t,a,b,c);
        count=count+temp;
        //printf("%d %d %d %d %d\n",a,b,c,t,temp);
        j=j-d;
        t=t+d;
    }
    return count;
}
int position5(int j, int a, int b, int c, int d, int e)
{
    int t=0,temp,count=0;
    t=t+e;
    while(j>e)
    {
        temp=position4(t,a,b,c,d);
        count=count+temp;
        j=j-e;
        t=t+e;
    }
    return count;
}
int position6(int j, int a, int b, int c, int d, int e, int f)
{
    int t=0,temp,count=0;
    t=t+f;
    while(j>f)
    {
        temp=position5(t,a,b,c,d,e);
        count=count+temp;
        j=j-f;
        t=t+f;
    }
    return count;
}
int position7(int j,int a,int b,int c,int d,int e,int f,int g)
{
    int t=0,temp,count=0;
    t=t+g;
    while(j>g)
    {
        temp=position6(t,a,b,c,d,e,f);
        count=count+temp;
        j=j-g;
        t=t+g;
    }
    return count;
}
void main()
{
    int arr[]={1,2,5,10,20,50,100}, i,j,k,l,m,n,o,temp,count=0;
    for(i=0;i<6;i++)
        for(j=i+1;j<7;j++)
    {
        temp=position2(200,arr[i],arr[j]);
        //printf("%d %d %d\n",arr[i],arr[j],temp);
        count=count+temp;
    }
     for(i=0;i<5;i++)
        for(j=i+1;j<6;j++)
            for(k=j+1;k<7;k++)
    {
        temp=position3(200,arr[i],arr[j],arr[k]);
        count=count+temp;
    }

    for(i=0;i<4;i++)
        for(j=i+1;j<5;j++)
            for(k=j+1;k<6;k++)
                for(l=k+1;l<7;l++)
    {
        temp=position4(200,arr[i],arr[j],arr[k],arr[l]);
        count=count+temp;
    }

    for(i=0;i<3;i++)
        for(j=i+1;j<4;j++)
            for(k=j+1;k<5;k++)
                for(l=k+1;l<6;l++)
                    for(m=l+1;m<7;m++)
    {
        temp=position5(200,arr[i],arr[j],arr[k],arr[l],arr[m]);
        count=count+temp;
    }
     for(i=0;i<2;i++)
        for(j=i+1;j<3;j++)
            for(k=j+1;k<4;k++)
                for(l=k+1;l<5;l++)
                    for(m=l+1;m<6;m++)
                        for(n=m+1;n<7;n++)
    {
        temp=position6(200,arr[i],arr[j],arr[k],arr[l],arr[m],arr[n]);
        count=count+temp;
    }


        temp=position7(200,arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6]);
        count=count+temp;
    printf("%d",count);
}
