#include<stdio.h>
int main()
{
    int n,i,result=1;

    printf("enter a num");
    scanf("%d",&n);

    for (i=1;i<=10;i++)

    {
        result=n*i;
        printf("\n");

    printf("%d*%d=%d",n,i,result);
    }

    return 0;
}
