#include <stdio.h>

int main() {

    // print the week day according day number.

    printf("enter the day: ");
    int day; scanf("%d", &day);

    // using switch
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day entered");
                 
    }


    // if (day == 1) {
    //     printf("Monday");
    // } else if (day == 2) {
    //     printf("Tuesday");
    // } else if (day == 3) {
    //     printf("Wednesday");
    // } else if (day == 4) {
    //     printf("Thursday");
    // } else if (day == 5) {
    //     printf("Friday");
    // } else if (day == 6) {
    //     printf("Saturday");
    // } else if (day == 7) {
    //     printf("Sunday");
    // } else {
    //     printf("Invalid day entered");
    // }

    return 0;
}