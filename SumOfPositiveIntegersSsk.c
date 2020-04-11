#include <stdio.h>
void main()
{
    int n, i, sum=0;
    for (i=0;i<15;i++)
    {
        printf ("enter integer");
        scanf ("%d",&n);
        if(n<=0)
            continue;
        sum=sum+n;
    }
    printf("sum of positive intiger,%d",sum);
}
