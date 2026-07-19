#include <stdio.h>

int main(void)
{
    char c;
    char next_c;

    printf("enter a character: ");
    scanf("%c", &c);

    // 다음 문자를 계산
    next_c = c + 1;

    // c와 next_c를 각각 문(%c)와 정수(%i) 형태로 출력
    printf("the next character of %c (%i) is %c (%i)\n", c, c, next_c, next_c);

    return 0;
}
