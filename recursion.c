#include <stdio.h>

int fact(int k) {
    if (k > 0) {
        return k * fact(k - 1);
    }

    return 1;
}


int main() {
    printf("%d", fact(10));
    return 0;
}