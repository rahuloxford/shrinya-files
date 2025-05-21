#include <stdio.h>

int main() {

    // make this pattern
    /*
    *
    **
    ***
    ****
    *****
    */

    // int i, j;
    // for (i = 1; i <= 5; i++) {
    //     for (j = 0; j < i; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // make this pattern
    /*
    *****
    ****
    ***
    **
    *
    */
    int i, j;
    for(j = 5; j >= 1; j--){
        for(i = 0; i < j; i++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}