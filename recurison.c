#include<stdio.h>

void hello(int n) {

    // itration end (base case)
    if (n == 0) {
        return;
    }

    // printing statment
    printf("hello!\n");

    // call it self
    hello(n-1);

}

int main() {
    
    // calling function
    hello(10);
    
    return 0;
}