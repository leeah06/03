#include <stdio.h>

int main(void)
{
    float conversion_a, conversion_b; // 유의사항에 맞추어 부동소수점 변수로 선언
    float result;

    printf("분자를 입력하세요 : ");
    scanf("%f", &conversion_a);

    printf("분모를 입력하세요 : ");
    scanf("%f", &conversion_b);

    // 나누기 연산 수행
    result = conversion_a / conversion_b;

    printf("나누기의 결과는 %f 입니다.\n", result);

    return 0;
}
