#include <stdio.h>

int main(void){
    FILE *fptr;
    fptr = fopen("odd.txt","w");
    int n,i=1;
    if(fptr==NULL){
        printf("error");
        return 1;
    }
    scanf("%d",&n);
    while(i<n){
        fprintf(fptr,"%d\t",i);
        i+=2;
    }
    fclose(fptr);
}
