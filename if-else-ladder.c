#include <stdio.h>

int main() {

    // build a grading system.
    printf("What is your marks?? ");
    float marks;
    scanf("%f", &marks);

    if (marks >= 90) {
        printf("A");
    } else if (marks >= 80) {
        printf("B");
    } else if (marks >= 70) {
        printf("C");
    } else if (marks >= 60) {
        printf("D");
    } else if (marks >= 50) {
        printf("E");
    } else {
        printf("Fail");
    }

    return 0;
}

// if else ladder

/*

if (condition) {
    code
} else if (condition) {
    code
} else if (condition) {
    code
} else if (condition) {
    code
} else {
    code
}

*/