#include<stdio.h>
int palindrome(int k)
{
    int a;
    a=reverse(k);
    if(a==k)
        return 1;
    else return 0;
}
int reverse(int k)
{
    int a,b=0;
    a=k;
    while(a!=0)
    {
        b=b*10+a%10;
        a=a/10;
    }
    return b;
}
void main()
{
    int i,j,k,k1=0,f=1;
    for(i=999;i>99&&f;i--)
        for(j=999;j>99&&f;j--)
            {k=i*j;
             if(palindrome(k))
                 {
                  printf("%d\n",k);
                  printf("%d\n",i);
                  printf("%d\n",j);
                  if(k1<k)
                    k1=k;
                 }

            }
    printf("the larhest is %d\n",k1);

}






