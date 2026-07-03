#include<stdio.h>
#include<math.h>

void main(){
    int n,a,b,i,fact=1,sum=0;
    printf("enter number: ");
    scanf("%d",&n);
    b=n;
    while(n>0){
        a=n%10;
        n=n/10;
        for(i=a;i>1;i--){
            fact  = fact*i;
        } 
        sum+=fact;
        fact=1;
    }
    printf("sum=%d\n",sum);
    if(sum==b)
        printf("strong number");
    else
        printf("not strong number");
}