#include <stdio.h>

int main(void){
    int n,i=0,count=0;
    scanf("%d",&n);
    int a[3]={0};
    while(n!=0){
        int temp = n%10;
        a[i]=temp;
        i++;
        n=n/10;
    }
    for(i=0;i<3;i++){
        int unq = 1;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                unq = 0;
                break;
            }
        }
        if(unq){
            count++;
        }
    }
    printf("%d uniques",count);
}