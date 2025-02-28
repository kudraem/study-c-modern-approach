#include <stdio.h>
#define BASE_CHAR "*"

int main(void)
{
    printf("       %s\n", BASE_CHAR);
    printf("      %s\n", BASE_CHAR);
    printf("     %s\n", BASE_CHAR);
    printf("%s   %s\n", BASE_CHAR, BASE_CHAR);
    printf(" %s %s\n", BASE_CHAR, BASE_CHAR);
    printf("  %s\n", BASE_CHAR);

    return 0;
}