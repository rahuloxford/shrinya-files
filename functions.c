#include <stdio.h>

void greet(char name[], int age);

int add(int i, int j, int k) {
    return i + j + k;
}

int main() {

    // greet("Vikas", 25);
    // greet("Tom", 19);

    // printf("%d", add(23, 55, 14));
    int result = add(23, 55, 14);
    printf("%d", result);

    return 0;
}

void greet(char name[], int age) {
    printf("Hello %s is %d.\n", name, age);
}