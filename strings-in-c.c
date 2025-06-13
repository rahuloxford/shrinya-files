#include <stdio.h>
#include <string.h>

int main() {

    char username[] = "Chris Evans";
    printf("%s\n", username);
    // printf("%c\n", username[6]); // Access string

    username[6] = 'J'; // Modify string
    // printf("%s", username);

    // loop through the string
    // for (int i = 0; i < 11; i++) {
    //     printf("%c", username[i]);
    // }


    // Another Way Of Creating Strings
    char firstname[] = {'N', 'a', 't', 'a', 's' ,'h', 'a', '\0'};
    printf("%s\n", firstname);

    // printf("%d\n", sizeof(username));   // Outputs 13
    // printf("%d\n", sizeof(firstname));  // Outputs 13

    // printf("---Special characters in Strings---\n");

    // char message[] = "The \\king\\ in \nthe \tnorth";
    // printf("%s", message);


    // String functions..

    char fullName[30] = "Peter Parker";
    printf("%d\n", sizeof(fullName));
    printf("%d\n", strlen(fullName));


    return 0;
}