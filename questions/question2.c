#include <stdio.h>

int main() {

    // print if a number is positive, negative or zero

    printf("Enter a number? ");
    int number;
    scanf("%d", &number);

    if (number > 0) {
        printf("POSITIVE");
    } else if (number == 0) {
        printf("ZERO");
    } else {
        printf("NEGATIVE");
    }

    // print if the number is even or odd.

    printf("Enter a number? ");
    int number;
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("EVEN");
    } else {
        printf("ODD");
    }
    
    return 0;
}