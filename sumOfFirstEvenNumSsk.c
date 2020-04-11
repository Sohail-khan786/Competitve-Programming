#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("enter a integer");
    scanf("%d",&n);

    for (i=2;i<=2*n;i=i+2)
    {
      sum=sum+i;

    }
    printf("sum of even num : %d",sum);

 return 0;
}
