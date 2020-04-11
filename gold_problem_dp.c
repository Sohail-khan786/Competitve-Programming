// Gold mine problem G2g
// https://www.geeksforgeeks.org/gold-mine-problem/

#include<stdio.h>
int big(int a, int b,int c)
{
  if(a>b)
  {
    if(a>c)
        return a;
    else
        return c;
  }
  else
  {
    if(b>c)
        return b;
    else
        return c;
  }
}
int main()
{
    int i,j,m=4,n=4,r1,r2,r3,max;
 int g[4][4] ={ {1, 3, 1, 5},
                   {2, 2, 4, 1},
                   {5, 0, 2, 3},
                   {0, 6, 1, 2}};

 int a[10][10];
 for(i=0;i<m;i++)
 {
  a[i][0]=g[i][0];
 }
  for(i=1;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
        r1=g[j][i-1];
        if((j-1) >= 0)
            r2=g[j-1][i-1];
        else
            r2=0;
        if((j+1) < m)
           r3=g[j+1][i-1];
        else
            r3=0;

        max = big(r1,r2,r3);
        g[j][i]= g[j][i]+max;
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d\t",g[i][j]);
    }
    printf("\n");
  }
  max=0;
 for(i=0;i<m;i++)
 {
     max = max>g[i][m-1] ? max : g[i][m-1];
 }
 printf("%d",max);
 return 0;
}
