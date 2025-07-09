#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("marvel.txt", "r");

    char message[100];

    while (fgets(message, 100, fptr)) {
        printf("%s", message);
    }
  

    // fprintf(fptr, "I am Quill\n");

    fclose(fptr);
}