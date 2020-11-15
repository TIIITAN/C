#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    // single character, integer type
    char letter = 'A'; // 65

    // string literal, stored as read-only data
    char *name1 = "Titouan";

    // character array initialized from string literal, copied to and stored on the stack
    char name2[] = "Titouan";

    // exact same as above
    char name3[] = { 'T', 'i', 't', 'o', 'u', 'a','n', '\0'};

    // pointer to char, holds up to 128 elements, stored on the stack
    char name4[128];

    // copy string literal into name4
    strcpy(name4, "Titouan");
    printf("%s\n", name4); // Titouan
    strlen(name4); // 7

    // access elements -- arr[index] => *(arr + index)
    name4[0]; // T
    *(name4 + 0); // T
    0[name4]; // T
    *(0 + name4); // T

    // modify element
    name4[7] = '!';
    *(name4 + 7) = '!';
    7[name4] = '!';
    *(7 + name4) = '!';

    name4; // Titouan!

    // change boundary of string
    name4[5] = '\0';
    printf("%s\n", name4); // Titou
    strlen(name4); // 5

    return EXIT_SUCCESS;
}
