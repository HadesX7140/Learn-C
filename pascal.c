#include <stdio.h>
void main(){
int n,i,j,a[5][5]={0};
printf("enter number:");
scanf("%d",&n);
for(i=0;i<n;i++){
    a[i][0]=1;
}
for(i=1;i<n;i++){
    for(j=1;j<=i;j++){
        a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
}
for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
}

