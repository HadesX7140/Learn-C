#include <stdio.h>
#include <string.h>

int main(void){
    char bin[64];
    printf("enter binary num.[highest 60 bits]:");
    scanf("%s",bin);
    if(strlen(bin)>60){
        printf("error");
        return 1;
    }
    long long decimal=0;
    int n;
    for(int i=0;n=strlen(bin),i<n;i++){
        if(bin[i]!='0'&& bin[i]!='1'){
            printf("error");
            return 1;
        }
        else{
            decimal = decimal*2+bin[i]-'0';
        }
    }
    printf("decimal value:  %lld",decimal);
}