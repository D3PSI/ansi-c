#include <stdio.h>

/**
 * Prints the value of getchar() != EOF
 */
main() {
    int c;
    while(c = getchar() != EOF)
        printf("%d", c);
    printf("%d", c);
}
