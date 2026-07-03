#include <stdio.h>
void main(){
int arr[50],e[50]={0},o[50]={0},n,i,j=0,k=0;
printf("enter total numbers: ");
scanf("%d",&n);
printf("enter numbers:\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    if((arr[i])%2==0){
            e[j]=arr[i];
            j++;
    }
    else{
        o[k]=arr[i];
        k++;
    }
}
for(i=0;i<j;i++){
    printf("%d\t",e[i]);
}
printf("\n");
for(i=0;i<k;i++){
    printf("%d\t",o[i]);
}
}

