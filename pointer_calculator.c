#include<stdio.h>

int main(){
    int a,b;
    int *p1,*p2;
    char ch;
    p1=&a;
    p2=&b;
    printf("Select the Operation\n");
    printf("Type + for Addition\n");
    printf("Type - for Subtraction\n");
    printf("Type * for Multiplication\n");
    printf("Type / for Division\n");
    scanf("%c",&ch);
    printf("Enter any two number\n");
    scanf("%d %d",&a,&b);
    switch(ch){
        case '+':
            printf("%d + %d = %d\n",a,b,(*p1+*p2));
        break;
        case '-':
            printf("%d - %d = %d\n",a,b,(*p1-*p2));
        break;
        case '*':
            printf("%d * %d = %d\n",a,b,(*p1**p2));
        break;
        case '/':
            if(*p2==0){
                printf("Sorry, you can not divide a number by 0\n");
                break;
            }
            printf("%d / %d = %d\n",a,b,(*p1/(float)*p2));
        break;
        default:
            printf("Invalid operation");
    }
    return 0;
}