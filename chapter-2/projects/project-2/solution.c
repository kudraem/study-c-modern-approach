#include <stdio.h>
#define PI 3.14159f
/*
* If use `4 / 3` instead of `4.0f / 3.0f` there is 0 value, because 
* of C truncate the result of division of two int values.
*/
#define SCALING_FACTOR (4.0f / 3.0f)

int main(void)
{
    float radius, volume;

    radius = 10.0f;
    
    volume = SCALING_FACTOR * PI * (radius * radius * radius);

    printf("Sphere volume with %.0f-meter radius is %.2f\n", radius, volume);

    return 0;
}