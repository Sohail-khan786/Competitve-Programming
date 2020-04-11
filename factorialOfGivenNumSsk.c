#include<stdio.h>
void main() {
int n,i;
unsigned long long factorial =1;
printf("enter an integer");
scanf("%d",&n);
if(n<0)
    printf("factorial for negative number does not exist");
    else{
        for(i=2;i<n;i++)
            factorial *=i;
        printf("factorial of %d=%llu",n,factorial);
    }
}

