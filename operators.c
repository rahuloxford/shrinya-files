#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // operators - symbols that performs some operations

    // Arithemetic operators [ +, -, *, /, % ]
    // printf("%d\n", 10 + 7);
    // printf("%d\n", 10 - 7);
    // printf("%d\n", 10 * 7);
    // printf("%d\n", 5 / 2); // int / int = int
    // printf("%d\n", 28 % 5); // % = modulas


    // Comparison operators [ >, <, >=, <=, ==, != ]
    // printf("%d\n", 16 > 9);
    // printf("%d\n", 9 >= 9);
    // printf("%d\n", 3 < 9);
    // printf("%d\n", 9 <= 9);
    // printf("%d\n", 9 == 9);
    // printf("%d\n", 9 != 3);


    // Logical operators [ &&, ||, ! ]

    // and (&&) - returns true if all are true.
    // and operator will give you true only if all are true.
    // otherwise false (even if one is false)

    // printf("%d\n", true && true);
    // printf("%d\n", true && false);
    // printf("%d\n", false && true);
    // printf("%d", false && false);

    // or (||) - return true even if anyone is true
    // or operator will give you false only if all are false.
    // otherwise true (even if one is true)

    // printf("%d\n", true || true);
    // printf("%d\n", true || false);
    // printf("%d\n", false || true);
    // printf("%d", false || false);


    // not (!) - inverts the result
    // printf("%d", !true);
    // printf("%d", !false);


    // REAL LIFE EXAMPLE
    printf("%d", 6 > 8 && 3 == 3 || 9 + 2 < 5 && !(2 == 2));


    /*
    PRECIDENCE OF OPERATORS

    ()
    prefix(++)  prefix(--)
    *  /  %
    +  -
    <  <=  >  >=
    == !=
    !
    &&
    ||
    */

    return 0;
}