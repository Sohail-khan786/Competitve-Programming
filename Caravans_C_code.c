#include<stdio.h>
int main()
{
 int t,i,coun,n,c[10005],k=0;
 scanf("%d",&t);
 while(t--)
 {
     coun=1;
     scanf("%d",&n);
     for(i=0;i<n;i++)
        scanf("%d",&c[i]);
     for(i=1;i<n;i++)
     {
      if(c[i]<=c[i-1])
        coun++;
      else
        c[i]=c[i-1];
     }
    if(n!=0)
    printf("%d\n",coun);
    else
        printf("%d\n",k);
 }
 return 0;
}
