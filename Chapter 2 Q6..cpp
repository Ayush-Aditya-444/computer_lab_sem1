#include<stdio.h>
#include<math.h>

int main()
{
    int d, e, f, g, h, i, j;
    float c, a, b;
    printf("Enter Temperature in your Area:\n");
    scanf("%d", &a);
    printf("Enter Wind Velocity in that Same Area:\n");
    scanf("%d", &b);
    c=35.74+0.6215*a+((0.4275*a-35.75)*pow(b,0.16));
    printf("Wind Chill Factor: %d", c);
    return 0;
}
