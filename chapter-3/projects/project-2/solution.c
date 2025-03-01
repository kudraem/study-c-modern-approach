#include <stdio.h>

int main(void)
{
    int item_num;
    float price;
    int month, day, year;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t", item_num);
    printf("$%7.2f\t", price);
    printf("%.2d/%.2d/%.4d\n", month, day, year);

    return 0;
}