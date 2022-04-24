#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    printf("Enter Latitude Co-Ordinates(in degree):\n");
    scanf("%d%d", &a, &b);
    printf("Enter Longitude Co-Ordinates(in degree):\n");
    scanf("%d%d", &c, &d);
    e=acos(sin(a)*sin(b)+cos(a)*cos(b)*cos(d-c))*3963;
    printf("Distance Both Co-Ordinates: %d", e);
}
