#include <stdio.h>

int main() {

    //  store rno of 5 students
    
    // arrays is a data structure used to store multiple items of same type inside a single variale.

    // index :       0   1   2   3   4
    // int rnos[] = {14, 23, 59, 58, 25};
    // int length = sizeof(rnos) / sizeof(rnos[0]);

    // printf("%d", rnos[0]);
    // printf("%d", rnos[2]);
    // printf("%d", rnos[4]);

    // for (int i = 0; i < length; i++) {
    //     printf("%d ", rnos[i]);
    // }


    // another way

    // int nums[5]; // declaration

    // int length = sizeof(nums) / sizeof(nums[0]);

    // nums[0] = 10; // providing the values
    // nums[1] = 20;
    // nums[2] = 30;
    // nums[3] = 40;
    // nums[4] = 50;

    // input
    // for (int i = 0; i < length; i++) {
    //     scanf("%d", &nums[i]);
    // }

    // nums[0] = 101; // modifying

    // output
    // for (int i = 0; i < length; i++) {
    //     printf("%d ", nums[i]);
    // }


    // find the smallest kid in the class.

    int ages[] = {20, 22, 18, 35, 48, 26, 8, 70};

    int minAge = ages[0];

    for (int i = 1; i < 8; i++) {
        if (ages[i] < minAge) {
            minAge = ages[i];
        }
    }

    printf("Smallest kid in the class is %d yr old", minAge);

    return 0;
}