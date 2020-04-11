#include <stdio.h>
int main() {
int n;
do {
    printf("enter a value");
    scanf("%d",&n);
}
while(n<=0);
printf("n value: %d",n);
return 0;
}

