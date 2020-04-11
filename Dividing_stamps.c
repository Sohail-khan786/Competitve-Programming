#include<stdio.h>
int main()
{
    int n,i,a[100005];
    long int sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
     sum1=sum1+a[i];
    }
    sum2=(n*1.0/2)*(2+(n-1));
    if(sum1==sum2)
        printf("YES\n");
    else
        printf("NO\n");
 return 0;
}
