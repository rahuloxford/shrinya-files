#include <stdio.h>

int main() {

    printf("Enter two numbers? ");
    int a, b;
    scanf("%d %d", &a, &b);

    // if (a > b) {
    //     printf("%d", a);
    // } else {
    //     printf("%d", b);
    // }

    // ternary operators
    // int result = (condition) ? value : value

    int max = (a > b) ? a : b;
    printf("Max between %d and %d is %d", a, b, max);

    return 0;
}