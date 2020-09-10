//Lexicographic permutations
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,count=0;
    for(a=0;a<10;a++)
    {
       for(b=0;b<10;b++)
        {
            if(a==b)
                continue;
            else for(c=0;c<10;c++)
            {
                if(c==a||c==b)
                    continue;
                else for(d=0;d<10;d++)
                {
                    if(d==a||d==b||d==c)
                        continue;
                    else for(e=0;e<10;e++)
                    {
                        if(e==a||e==b||e==c||e==d)
                            continue;
                        else for(f=0;f<10;f++)
                        {
                            if(f==a||f==b||f==c||f==d||f==e)
                               continue;
                            else for(g=0;g<10;g++)
                            {
                                if(g==a||g==b||g==c||g==d||g==e||g==f)
                                    continue;
                                else for(h=0;h<10;h++)
                                {
                                    if(h==a||h==b||h==c||h==d||h==e||h==f||h==g)
                                        continue;
                                    else for(i=0;i<10;i++)
                                    {
                                        if(i==a||i==b||i==c||i==d||i==e||i==f||i==g||i==h)
                                            continue;
                                        else for(j=0;j<10;j++)
                                        {
                                            if(j==a||j==b||j==c||j==d||j==e||j==f||j==g||j==h||j==i)
                                                continue;
                                            else count++;
                                            if(count==1000000)
                                                printf("%d%d%d%d%d%d%d%d%d%d",a,b,c,d,e,f,g,h,i,j);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
