#include<stdio.h>
void main () {
char operator;
double a,b;

printf("enter an operator (+,-,*,/):");
scanf("%c",&operator);
printf("enter two operands:");
scanf("%lf %lf",&a,&b);
switch (operator) {
case'+':printf("addition of a&b:%lf",a+b);break;
case'-':printf("subtraction of a&b:%lf",a-b);break;
case'*':printf("multiplication of a&b:%lf",a*b);break;
case'/':printf("division of a&b;%lf",a/b);break;
}
}
