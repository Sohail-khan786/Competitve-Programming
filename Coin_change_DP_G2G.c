//G2G links
//https://www.geeksforgeeks.org/dynamic-programming-set-7-coin-change/

#include<stdio.h>
int change(int *s,int m,int n)
{
    //one solutuion
    if(n==0)
        return 1;

    //no solution on this branch
    if(n < 0)
        return 0;

    //no coins left to fullfil n ,hence no solution on this branch
    if(n > 0 && m <= 0)
        return 0;

    // if coins are left and we have positive value of n than check for possibility of solution
    if(n>0 && m>=0)
        return change(s,m-1,n) + change(s,m,n-*(s+m));

}
int main()
{
 int n,m,s[10]={0},i,temp,c[10],sol;
 printf("Enter number \t");
 scanf("%d",&n);
 printf("Enter number of coins\t");
 scanf("%d",&m);
 for(i=1;i<=m;i++)
 {
  scanf("%d",&temp);
  s[i]=temp;
 }
 sol=change(s,m,n);
 printf("%d\n",sol);
 return 0;
}
