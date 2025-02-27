#include <stdio.h>

int main(void)
{
    float x, x_exp2, x_exp3, x_exp4, x_exp5, value;

    printf("Enter x: ");
    scanf("%f", &x);

    x_exp2 = x * x;
    x_exp3 = x_exp2 * x;
    x_exp4 = x_exp3 * x;
    x_exp5 = x_exp4 * x;

    value = 3 * x_exp5 + 2 * x_exp4 - 5 * x_exp3 - x_exp2 + 7 * x - 6;

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f\n", value);

    return 0;
}