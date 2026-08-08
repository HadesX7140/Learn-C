#include <stdio.h>
#include <string.h>

typedef struct employee{
    char name[20];
    int id;
    int salary;
}info;

void search_employee(info details[],int n){
    for(int i=0;i<4;i++){
        if(details[i].id==n){
            printf("name: %s ",details[i].name);
            printf("\nsalary: %d",details[i].salary);
            return;
        }
    }
    printf("id not found");
    
}

int main(void){
    info details[4];
    int n;
    for(int i=0;i<1;i++){
        printf("name: ");
        scanf("%s",details[i].name);
        printf("id: ");
        scanf("%d",&details[i].id);
        printf("salary: ");
        scanf("%d",&details[i].salary);
    }
    printf("which id's info do u want?: ");
    scanf("%d",&n);
    search_employee(details,n);
}