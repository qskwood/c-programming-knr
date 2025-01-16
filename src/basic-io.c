#include <stdio.h>

#define PROMPT_ENUS "Please provide some input...\n"
#define CHAR_COUNT_TEXT_ENUS "You entered the following number of characters"

int main() {
    /* define a variable in which to store user-provided characters */
    int character;
    /* define a variable in which to store the character count as it grows */
    long character_count;
    /* set the initial character count to zero */
    character_count = 0;

    printf(PROMPT_ENUS);

    /* get input from the user and store it in a variable */
    /* loop unless the user last provided EOF */
    while ((character = getchar()) != EOF) {
        /* output the character the user provided */
        putchar(character);
        ++character_count;
    }

    /* tell the user how many characters they input */
    printf("%s: %d\n", CHAR_COUNT_TEXT_ENUS, character_count);
}
