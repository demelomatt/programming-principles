#include <stdio.h>
// Creating and using a programmer-defined function.

double pow(double base, double power); // function prototype

int main(void)
{
    double x, y;

    puts("Enter the base number and power:");
    scanf("%lf%lf", &x, &y);

    printf("%.1lf^%.1lf = %.2lf", x, y, pow(x,y));
}

// pow function definition returns the power raised to the base number
double pow(double base, double power)
{
    double result = base;

    for (int i = 2; i <= power; i++){
        result *= base;
    };

    return result;
}
