
#include <stdio.h>

int main() {
    
    // print the greatest among three integers?

    printf("Enter three numbers? ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
   
    if (a > b) {
        if (a > c) {
            printf("%d", a);
        } else {
            printf("%d", c);
        }
    } else if (b > c) {
        printf("%d", b);
    } else {
        printf("%d", c);
    }

    // or
    // if (a > b && a > c) {
    //     printf("%d", a);
    // } else if (b > c) {
    //     printf("%d", b);
    // } else {
    //     printf("%d", c);
    // }

    return 0;
}
