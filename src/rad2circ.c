#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    const double PI = 3.141592654;
    double radius;
    double circumference;
    double area;

    printf("Write the radius of the circle >");

    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Circumference:  %5.7lf\n", circumference);

    printf("Area:           %5.7lf\n", area);


    return 0;
}
