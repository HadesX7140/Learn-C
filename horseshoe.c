#include<stdio.h>

void main(){
    int a,b,c,d;
    printf("Enter the value of a,b,c,d:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b && b==c && c==d)
    printf("count=3");
    else if(a==b && b==c || a==b && b==d || a==c && c==d || b==c && c==d)
    printf("count=2");
    else if(a==b && c==d || a==c && b==d || a==d && b==c)
    printf("count=2");
    else if(a==b && a!=c && a!=d || a==c && a!=b && a!=d || a==d && a!=b && a!=c || b==c && b!=a && b!=d || b==d && b!=a && b!=c || c==d && c!=a && c!=b)
    printf("count=1");
    else printf("You r gud to go!");
}
