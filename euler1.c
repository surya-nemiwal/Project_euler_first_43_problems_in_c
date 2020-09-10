#include<stdio.h>
#include<math.h>

void main()
{

      long long a=600851475143,b,c,i;
      double a1=600851475143;
      printf("%lld\n",a);
      b=(long long)sqrt(a1);
      printf("%lld\n",b);
      for(i=2;i<=b;i++)
        if(a%i==0)
        {
            c=i;
            a=a/i;
            i--;
        }


      printf("%lld\n",c);


}
