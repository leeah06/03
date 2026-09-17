#include <stdio.h>

int main(void) {
    char c, next;
    printf("enter a character : ");
    scanf("%c", &c);
    next = c + 1;
    printf("the next character of %c (%d) is %c (%d)\n", c, c, next, next);
    return 0;
}
