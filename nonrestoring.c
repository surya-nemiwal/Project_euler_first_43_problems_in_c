#include<stdio.h>
int binary(int a[],int b)
{
	int i=0,j,k,l;
	while(b>0)
	{
		j=b%2;
		b=b/2;
		a[i++]=j;
	}
	l=i-1;
	k=0;
	while(k<l)
    {
        j=a[k];
        a[k]=a[l];
        a[l]=j;
        k++;
        l--;
    }
	return i;
}
void add(int a[],int b[],int l)
{
    int carry=0,i,temp;
    for(i=l;i>-1;i--)
    {
        temp=a[i]+b[i]+carry;
        if(temp==2)
        {
            a[i]=0;
            carry=1;
        }
        else if(temp==3)
        {
            a[i]=1;
            carry=1;
        }
        else if(temp==1)
        {
            a[i]=1;
            carry=0;
        }
        else
        {
            a[i]=0;
            carry=0;
        }
    }
}
int balancesize(int m[],int msize, int q[],int qsize)
{
    int l,temp,i;
    if(qsize>=msize)
    {
        l=qsize;
        temp=qsize-msize+1;
        for(i=qsize-1;i>-1;i--)
            q[i+1]=q[i];
        q[0]=0;
        for(i=msize-1;i>-1;i--)
            m[i+temp]=m[i];
        for(i=0;i<temp;i++)
            m[i]=0;
    }
    else
    {
        l=msize;
        temp=msize-qsize+1;
        for(i=msize-1;i>-1;i--)
            m[i+1]=m[i];
        m[0]=0;
        for(i=qsize-1;i>-1;i--)
            q[i+temp]=q[i];
        for(i=0;i<temp;i++)
            q[i]=0;
    }
    return l;
}
void comp2s(int a[],int l)
{
    int i;
    for(i=0;i<=l;i++)
        if(a[i]==0)
            a[i]=1;
        else a[i]=0;
    i=l;
    while(i>-1&&a[i]==1)
        a[i--]=0;
    if(i>-1)
        a[i]=1;

}
void main()
{
    int m[20],q[20],a[20],m2[20],msize,qsize,i,j,l,divident,divisor,flag,n;
    printf("enter divident and divisor\n");
    for(i=0;i<20;i++)
        a[i]=0;
    scanf("%d%d",&divident,&divisor);
    //m=divisor and q=divident
    qsize=binary(q,divident);
    msize=binary(m,divisor);
    l=balancesize(m,msize,q,qsize);
    printf("m = ");
    for(i=0;i<=l;i++)
        printf("%d",m[i]);
    printf("\nq = ");
    for(i=0;i<=l;i++)
        printf("%d",q[i]);
    //taking 2's complement of m
    for(i=0;i<=l;i++)
        m2[i]=m[i];
    comp2s(m2,l);
    printf("\n 2's complement of m = ");
    for(i=0;i<=l;i++)
        printf("%d",m2[i]);
    //printing initial values
    printf("\n");
    for(i=0;i<=l;i++)
        printf("%d ",a[i]);
    printf("\t");
    for(i=0;i<=l;i++)
        printf("%d ",q[i]);
    printf("\n");
    //performing l iterations
    for(n=0;n<=l;n++)
    {
        flag=a[0];
        for(i=0;i<l;i++)
            a[i]=a[i+1];
        a[l]=q[0];
        for(i=0;i<l;i++)
            q[i]=q[i+1];
        if(flag==1)
            add(a,m,l);
        else add(a,m2,l);
        if(a[0]==1)
            q[l]=0;
        else q[l]=1;
        //printing values
        for(i=0;i<=l;i++)
            printf("%d ",a[i]);
        printf("\t");
        for(i=0;i<=l;i++)
            printf("%d ",q[i]);
        printf("\n");
    }
    if(a[0]==1)
       { add(a,m,l);
        //printing values
        for(i=0;i<=l;i++)
            printf("%d ",a[i]);
        printf("\t");
        for(i=0;i<=l;i++)
            printf("%d ",q[i]);
        printf("\n");
       }
    printf("\nthe quotient is = ");
    for(i=0;i<=l;i++)
        printf("%d",q[i]);
    printf("\nthe remainder is = ");
    for(i=0;i<=l;i++)
        printf("%d",a[i]);
}
/*
enter divident and divisor
3 7
m = 0111
q = 0011
 2's complement of m = 1001
0 0 0 0         0 0 1 1
1 0 0 1         0 1 1 0
1 0 0 1         1 1 0 0
1 0 1 0         1 0 0 0
1 1 0 0         0 0 0 0
0 0 1 1         0 0 0 0

the quotient is = 0000
the remainder is = 0011
*/







