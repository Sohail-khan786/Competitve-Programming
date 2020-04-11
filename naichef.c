#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,a,b,tp,arr[10005]={0},i;
    double p;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%d%d%d",&n,&a,&b);
      for(i=1;i<=n;i++)
      {
          scanf("%d",&tp);
          arr[tp]++;
      }
      p = (((arr[a]*1.0)/n)*((arr[b]*1.0)/n));
      printf("%f\n",p);
      memset(arr,0,sizeof(arr));
    }

return 0;
}
