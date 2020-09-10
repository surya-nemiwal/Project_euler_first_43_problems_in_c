#include<stdio.h>
#include<math.h>
void main()
{
    double sosq=0,sqos=0,i,j;
    for(i=1;i<101;i++)
    {
    sqos+=i;
   // printf("    %lf\n",sqos);
    sosq=sosq+pow(i,2);
    //printf("%lf\n",sosq);
    }
   //  printf("    %lf\n",sqos);

    sqos=pow(sqos,2);

   // printf("  %lf\n",sqos);
    j=sqos-sosq;
    printf("%lf\n",j);
}
