//TCS Maze Advanced coding problem

#include<stdio.h>
int main()
{
 int g[10][10]={{1, 8, 21, 7},
                {19 , 17, 10, 20},
                { 2, 18, 23, 22},
                {14, 25, 4, 13}};

 int m=4,n=4,a[10][10],i,j,minn;

//start point
a[0][0]=g[0][0];

//Filling Column-0 for DP matrix
for(i=1;i<m;i++)
{
  if(g[i-1][0] > g[i][0])
      g[i][0]=g[i-1][0];

}
//Filling Row-0 for DP matrix
for(i=1;i<m;i++)
{
  if(g[0][i-1] > g[0][i])
      g[0][i]=g[0][i-1];

}
 //Computation Loop DP
 for(i=1;i<m;i++)
 {
   for(j=1;j<n;j++)
   {
       minn = g[i-1][j] < g[i][j-1] ? g[i-1][j] : g[i][j-1];
       g[i][j] = minn < g[i][j] ? g[i][j] : minn ;
   }
 }

 //Just for checking your algorithm
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
       printf("%d\t",g[i][j]);
   }
   printf("\n");
 }

  //answer in last column
 printf(" Theres one path with which you can exit with minimum weight %d \n",g[m-1][n-1]);
 return 0;
}
