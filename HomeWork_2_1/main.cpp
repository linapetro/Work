//Вычислите выражение

#include <stdio.h>
#include <math.h>

int main()
{
    double x;

    printf("Please enter x: ");
    scanf("%lf", &x);

    const double hisl = 2 * cos(x - M_PI / 6.0) + sqrt(2);
    const double znam = (1 / (2 * log(x))) + pow(sin(x * x), 2);
    const double y = (hisl / znam) * exp(3 * x);

    printf("Result: %f\n", y);

    return 0;
}
