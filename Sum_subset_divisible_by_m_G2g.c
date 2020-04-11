//Subset Sum divisible by M
//https://www.geeksforgeeks.org/subset-sum-divisible-m/

#include<stdio.h>
int main()
{
 int i,j,m=0,n=4,g[100][100] , d1 ,d2 ,l;
 int a[100];

 printf("Enter value of m\t");
 scanf("%d",&l);

 printf("Enter Number Of Elements \t");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
   scanf("%d",&a[i]);
   m = m + a[i];
 }

 for(i=0;i<=m;i++)
    g[0][i]=0;
 for(i=0;i<=n;i++)
    g[i][0]=1;

 for(i=1;i<=n;i++)
 {
   for(j=1;j<=m;j++)
   {
     if(j<a[i])
        d1=0;
     else
        d1 = g[i-1][j-a[i]];

     d2 = g[i-1][j];

     if(d1==1 || d2==1)
        g[i][j]=1;
     else
        g[i][j]=0;
   }
 }

// Just TP DP print matrix
 for(i=0;i<=n;i++)
 {
   for(j=0;j<=m;j++)
    printf("%d\t",g[i][j]);
   printf("\n");
 }
 printf("\n\n\n");
 l;
 i=2;
 while(l<=m)
 {
     if(g[n][l]==1)
     {
       printf("yes\n");
       return 0;
     }
    l = l*i;
    i++;
 }
 printf("no\n");
 return 0;

}
