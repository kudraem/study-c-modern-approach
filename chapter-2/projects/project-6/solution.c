#include <stdio.h>

int main(void)
{
    float x, value;

    printf("Enter x: ");
    scanf("%f", &x);

    value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("((((3x + 2)x - 5)x - 1)x + 7)x - 6 = %.2f\n", value);

    return 0;
}