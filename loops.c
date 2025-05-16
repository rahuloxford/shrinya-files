#include <stdio.h>

int main() {

    // print "hello world"  10 times
    
    // loops - while, for, do while

    // while loop
    /*
    initialization
    while (condition) {
        statement1
        statement2
        statement3
        statement..

        increment / decrement
    }
    */


    // print "hello world"  10 times

    // int count = 1;
    // while (count <= 10) {
    //     printf("Hello World %d\n", count);
    //     count++;
    // }


    // print 1 to 30

    int i = 1;
    while (i <= 30) {
        printf("%d\n", i);
        i++;
    }

    // print 30 to 20

    int i = 30;
    while (i >= 20) {
        printf("%d\n", i);
        i--;
    }


    // print all the even nums between a and b.

    printf("Enter the start and end? ");
    int a, b; 
    scanf("%d %d", &a, &b);

    if (a < b) {
        while (a <= b) {
            if (a % 2 == 0) {
                printf("%d\n", a);
            }
            a++;
        }
    } else {
        while (a >= b) {
            if (a % 2 == 0) {
                printf("%d\n", a);
            }
            a--;
        }
    }

    // count the number of digits given by the user

    printf("Enter your number? ");
    int number;
    scanf("%d", &number);
    
    // count the digits
    int count = 0;
    while (number > 0) {
        number = number / 10;
        count++;
    }

    printf("there are %d digits in the given number", count);


    
    // print the number in reverse order given by the number?

    printf("Enter your number? ");
    int number;
    scanf("%d", &number);
    
    // count the digits
    int result = 0;
    while (number > 0) {
        int last_digit = number % 10;
        result = result * 10 + last_digit;
        number = number / 10;
    }

    printf("the given is reverse into: %d", result);



    return 0;
}