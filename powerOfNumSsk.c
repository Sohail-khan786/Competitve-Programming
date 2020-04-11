#include<stdio.h>
int main(){

int i=1,base,exponent,result=1;

printf("enter base:");
scanf("%d",&base);

printf("enter exponent:");
scanf("%d",&exponent);

for(i=1;i<=exponent;i++)
{
  printf("For Loop Value %d\n",i);
  printf("result = %d  and base = %d\n",result,base);

  result = result * base;

  printf("\n");
}


printf("%d^%d = %d\n",base,exponent,result);

return 0;
}
