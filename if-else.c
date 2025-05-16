#include <stdio.h>

int main() {

    // print if the user is a valid voter or not?
    printf("What's your age? ");
    int age;
    scanf("%d", &age);

    if (age >= 18) {
        printf("Valid Voter");
    } else {
        printf("Invalid Voter");
    }


    // print if it's cold or hot weather?
    // cold if temperature < 20.

    printf("Enter the temperature outside? ");
    float temperature;
    scanf("%f", &temperature); // 18

    if (temperature < 20) {
        printf("It's really cold weather outside!");
    } else {
        printf("It's warm weather outside!");
    }

    return 0;
}

// if else ?
    
    /*
    if (condition) {
        statement1
        statement2
        statement3
    } else {
        statement1
        statement2
        statement3
    }
    */