#include <stdio.h>
void main(){
int a[50][50]={0},b[50][50]={0},c[50][50]={0},i,j,k,n,sum;
printf("what number of square matrix do you want? : ");
scanf("%d",&n);
printf("enter %dx%d matrix a:\n",n,n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter %dx%d matrix b:\n",n,n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        sum=0;
        for(k=0;k<n;k++){
            sum += a[i][k]*b[k][j];
        }
        c[i][j]=sum;
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
}

