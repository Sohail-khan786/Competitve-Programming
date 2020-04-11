#include<stdio.h>
int main()
{
int N,i,sum=0;
printf ("enter a value of N");
scanf("%d",&N);
for (i=1;i<=N;i++){
    sum=sum+i;
}
printf("sum of natural number %d",sum);

}
