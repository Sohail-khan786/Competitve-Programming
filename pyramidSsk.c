#include<stdio.h>
void main() {
int i,j,k,numOfRows=4;
for(i=1;i<=numOfRows;i++) {
    for(j=i;j<numOfRows;j++) {
        printf(" ");
    }
    for(k=1;k<(i*2);k++) {
    printf("*");
    }
printf("\n");
}
}
