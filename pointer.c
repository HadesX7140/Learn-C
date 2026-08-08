#include <stdio.h>

void evod(int *a,int *e,int *o, int *c1, int *c2){
    *c1=0;
    *c2=0;
    for(int i=0;i<6;i++){
        if(*a%2==0){
            *e = *a;
            a++;
            e++;
            (*c1)++;
        }
        else{
            *o = *a;
            a++;
            o++;
            (*c2)++;
        }
        
    }
}

int main(void){
    int array[6],even[6],odd[6],c1,c2;
    for(int i=0;i<6;i++){
        scanf("%d",&array[i]);
    }
    evod(array,even,odd,&c1,&c2);
    for(int i=0;i<c1;i++){
            printf("%d\t",even[i]);
    }
    printf("\n");
    for(int i=0;i<c2;i++){
            printf("%d\t",odd[i]);
    }

}
