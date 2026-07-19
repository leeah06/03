#include <stdio.h>

int main(void)
{
    char c;
    int i;

    printf("input a number :");
    scanf("%c", &c);

    // [빈칸 답안] c에 저장된 문자 값을 숫자로 변환하는 식
    i = c - '0'; 

    printf("The input number is %i\n", i);

    return 0;
}
