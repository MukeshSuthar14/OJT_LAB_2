#include<stdio.h>

struct person{
    char name[20];
    int age;
    float salary;
};

int main(){
    struct person p[5];
    int i=0;

    for(i=0;i<5;i++){
        printf("\nEnter person name:");
        scanf("%s",p[i].name);
        printf("\nEnter person age:");
        scanf("%s",p[i].age);
        printf("\nEnter person salary:");
        scanf("%s",p[i].salary);
    }

    for(i=0;i<5;i++){
        printf("\nPerson %d Detail",i+1);
        printf("\nName = %s",p[i].name);
        printf("\nAge = %s",p[i].age);
        printf("\nSalary = %.2f",p[i].salary);
    }

    return 0;
}