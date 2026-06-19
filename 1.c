#include <stdio.h>

int main() {
    int b,x,n,sum;
    printf("enter value:");
    scanf("%d",&n);
    b=n%11;
    x=n-b;
    sum=x+11;
    printf("next number is %d\n",sum);
    printf("size of sum is %d\n",sizeof(sum));
    return 0;
}