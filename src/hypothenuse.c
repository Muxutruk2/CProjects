#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double A;    
    double B;    
    double C;    

    printf("Enter side A > ");
    scanf("%lf", &A);
    printf("Enter side B > ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B); // C = sqrt(a^2 + b^2)
    
    printf("Hypothenuse is %lf", C);
    return 0;
}
