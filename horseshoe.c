#include<stdio.h>

void main(void){
    int a,b,c,d,count=0;
    printf("Enter the value of a,b,c,d:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b && b==c && c==d)
    printf("count=3");
    else if(a==b && b==c || a==b && b==d || a==c && c==d || b==c && c==d)
    printf("count=2");
    else if(a==b && c==d || a==c && b==d || a==d && b==c)
    printf("count=2");
    else if(a==b && a!=c && a!=d || b==c && b!=a && b!=d || c==d && c!=a && c!=b || a==d && a!=b && a!=c)
    printf("count=1");
    else printf("You r gud to go!");
}