#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    scanf("%d %d %d %d", &n5, &n6, &n7, &n8);
    scanf("%d %d %d %d", &n9, &n10, &n11, &n12);
    scanf("%d %d %d %d", &n13, &n14, &n15, &n16);

    printf("\n");
    printf("%2d %2d %2d %2d\n",  n1,  n2,  n3,  n4);
    printf("%2d %2d %2d %2d\n",  n5,  n6,  n7,  n8);
    printf("%2d %2d %2d %2d\n",  n9, n10, n11, n12);
    printf("%2d %2d %2d %2d\n", n13, n14, n15, n16);
    printf("\n");

    printf("Row sums: %d ", n1 + n2 + n3 + n4);
    printf("%d ", n5 + n6 + n7 + n8);
    printf("%d ", n9 + n10 + n11 + n12);
    printf("%d\n", n13 + n14 + n15 + n16);

    printf("Column sums: %d ", n1 + n5 + n9 + n13);
    printf("%d ", n2 + n6 + n10 + n14);
    printf("%d ", n3 + n7 + n11 + n15);
    printf("%d\n", n4 + n8 + n12 + n16);

    printf("Diagonal sums: %d %d\n", n1 + n6 + n11 + n16, n4 + n7 + n10 + n13);

    return 0;
}