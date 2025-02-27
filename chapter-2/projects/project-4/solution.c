#include <stdio.h>
#define TAX_PERCENTAGE 0.05f

int main(void)
{
    float amount, tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount * TAX_PERCENTAGE;

    printf("With tax added: $%.2f\n", amount + tax);

    return 0;
}