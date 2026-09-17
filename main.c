#include <stdio.h>

int main(void)
{
    int a, b;
    float result;

    printf("Enter numerator : ");
    scanf("%d", &a);

    printf("Enter denominator : ");
    scanf("%d", &b);

    result = (float)a / (float)b;

    printf("The result of division is %f\n", result);

    return 0;
}