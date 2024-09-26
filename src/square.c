#include <stdio.h>

double square(double x){
    return x*x;
}

int main(int argc, char *argv[])
{
    double x = square(3.14);
    printf("%lf", x);
    return 0;
}
