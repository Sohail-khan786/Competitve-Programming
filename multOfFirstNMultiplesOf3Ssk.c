#include<stdio.h>
int main()
{
    int n,i,result=1;

    printf("enter a number");
    scanf("%d",&n);

    for (i=3;i<=3*n;i=i+3)

    {
        result=result*i;
    }

    printf("ans : %d",result);

    return 0;
}
