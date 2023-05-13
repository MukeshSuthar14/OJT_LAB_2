#include<stdio.h>

int main(){
    int num, *ptr;
    printf("\nEnter the value of number:");
    scanf("%d",&num);
    ptr=&num;
    printf("Address of number is %u",&ptr);
    printf("\n");
    return 0;
}