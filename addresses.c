#include <stdio.h>

void swap(int* i, int* j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main() {

    int age;
    age = 25;

    // pointer vars
    int* ptr = &age;

    // printf("%p\n", &age);
    // printf("%p\n", ptr);

    // printf("%d\n", *ptr); // dereference

    *ptr = 14;

    // printf("%d\n", *ptr);
    // printf("%d\n", age);



    // int i = 14;
    // int *j = &i;
    // int *k = &i;

    // printf("%d %d %d\n", i, *j, *k);
    // i = 90;
    // printf("%d %d %d", i, *j, *k);


    int i = 25;
    int j = 50;

    printf("Original values: %d %d\n", i, j);

    // swap them
    swap(&i, &j);
    printf("After swap: %d %d", i, j);

    return 0;
}