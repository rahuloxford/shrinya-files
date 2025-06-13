// Multidimentional Arrays?

#include <stdio.h>

int main() {
    // single dimentional arrays
    // int arr[] = {156, 6, 98, 564, 66};

    // multidimentional arrays?
    // 2d array
    int nums[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    // printf("%d", nums[2][0]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }

    // 3d arrays
    char chars[2][2][2] = {
        {
            {'q', 'w'},
            {'e', 'r'}
        },
        {
            {'t', 'y'},
            {'u', 'i'}
        }
    };

    // printf("%c", chars[0][0][1]);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%c ", chars[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

}