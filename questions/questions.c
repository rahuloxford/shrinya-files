#include <stdio.h>

int main() {
    
    // swap the numbers?
    printf("Enter two numbers? ");
    int a, b;
    scanf("%d %d", &a, &b);

    // swap the numbers?
    // int temp = a;
    // a = b;
    // b = temp;

    // swap them without third variable?
    a = a + b;
    b = a - b;
    a = a - b;


    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", b);


    return 0;
}