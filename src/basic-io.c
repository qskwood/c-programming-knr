#include <stdio.h>

#define PROMPT_ENUS "Please provide some input...\n"
#define CHAR_COUNT_TEXT_ENUS "You entered the following number of characters"
#define LINE_COUNT_TEXT_ENUS "You entered the following number of lines"

int main() {
    /* define a variable in which to store user-provided characters */
    int character;
    /* define a variable in which to store the character count as it grows */
    unsigned long character_count;
    /* set the initial character count to zero */
    character_count = 0;
    /* define a variable in which to store the line count as it grows */
    unsigned long line_count;
    /* set the initial line count to zero */
    line_count = 0;

    printf(PROMPT_ENUS);

    /* get input from the user and store it in a variable */
    /* loop unless the user last provided EOF */
    while ((character = getchar()) != EOF) {
        /* output the character the user provided */
        putchar(character);
        /* increment the line count if the user provided a newline */
        if (character == '\n')
            ++line_count;
        /* increment the character count */
        ++character_count;
    }

    /* tell the user how many characters they input */
    printf("%s: %lu\n", CHAR_COUNT_TEXT_ENUS, character_count);

    /* tell the user how many lines they input */
    printf("%s: %lu\n", LINE_COUNT_TEXT_ENUS, line_count);
}
