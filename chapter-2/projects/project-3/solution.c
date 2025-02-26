#include <stdio.h>
#define PI 3.14159f
#define SCALING_FACTOR (4.0f / 3.0f)

int main(void)
{
    float radius, volume;

    printf("Enter sphere radius: ");
    scanf("%f", &radius);
    
    volume = SCALING_FACTOR * PI * (radius * radius * radius);

    printf("Sphere volume with %.0f-meter radius is %.2f\n", radius, volume);

    return 0;
}