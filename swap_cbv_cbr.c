#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swapping values in funtion a=%d ,b=%d",*a,*b);
}
void main(){
    int a=10,b=20;
    printf("\nBefore swapping the values in main a=%d, b=%d\n",a,b);
    swap(&a,&b);
    printf("\nAfter swapping the values in main a=%d ,b=%d\n\n",a,b);
}