#include <stdio.h>
#include <string.h>

typedef struct address{
    int house;
    char block[5];
    char city[10];
    char state[10];
}info;

void inform(int n,info adrs[]){
    printf("House: %d, Block: %s, City: %s, State: %s",adrs[n].house,adrs[n].block,adrs[n].city,adrs[n].state);
}
int main() {
    info adrs[5];
    int i,n;
    char a[10];
    for(i=0;i<5;i++){
        printf("Enter house no.: ");
        scanf("%d",&adrs[i].house);
        printf("Enter block no.: ");
        scanf("%s",&adrs[i].block);
        printf("Enter city: ");
        scanf("%s",adrs[i].city);
        printf("Enter state: ");
        scanf("%s",adrs[i].state);
    }
    printf("which person's info do you want?: ");
    scanf("%d",&n);
    inform(n,adrs);
}