#include <stdio.h>

int main() {
    /* define a variable in which to store user-provided characters */
    int character;

    /* get input from the user and store it in a variable */
    /* loop unless the user last provided EOF */
    while ((character = getchar()) != EOF) {
        /* output the character the user provided */
        putchar(character);
    }
}
