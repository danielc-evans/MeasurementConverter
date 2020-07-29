#include <stdio.h>

int main()
{
    // imperial conversion
    int distance_feet = 0;
    float distance_yards = 0.0f;
    int distance_inches = 0;
    float distance_miles = 0.0f;
    float distance_furlongyards = 0.0f;

    puts("Enter distance in feet: ");
    scanf("%d", &distance_feet);

    // perform conversion
    distance_inches = distance_feet * 12;
    distance_yards = distance_feet / 3.0;
    distance_miles = distance_feet / 5280.0;
    distance_furlongyards = distance_yards / 220;

    //output formatted response (format specifiers)
    printf("%-5d inches\n", distance_inches);
    printf("%-2f yards\n", distance_yards);
    printf("%-2f miles\n", distance_miles);
    printf("%-2f furlongs\n", distance_furlongyards);

    return 0;
}
