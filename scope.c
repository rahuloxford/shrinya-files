#include <stdio.h>

int i = 25;
int j = 110; // gloal

int demo() {
    int i = 90; // local
    printf("%d %d ", i, j);
}

int main() {
    demo();
    printf("%d ", i);

    printf("%d ", j);


    return 0;
}