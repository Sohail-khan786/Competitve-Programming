//Friend pair problem G2G
//https://www.geeksforgeeks.org/friends-pairing-problem/

#include<stdio.h>
int friends(int n)
{
    //one person will always have to remain single
    if(n==1)
        return 1;
    // two perosns can be both songle or paired hence 2 ways
    if(n == 2)
        return 2;
    return friends(n-1)+(n-1)*friends(n-2);
 // remains single

}
int main()
{
    int n,count;
    printf("Enter Number of persons\t");
    scanf("%d",&n);
    count=friends(n);
    printf("The number of ways they can be friends are %d\n",count);
  return 0;
}
