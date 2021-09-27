//Задание на определение наибольшей площади фигуры
#include <stdio.h>
#include <math.h>

int main()
{
    double R;
    double a;
    double d;
    printf("Please enter R:");
    scanf("%lf", &R);
    printf("Please enter a:");
    scanf("%lf", &a);
    printf("Please enter d:");
    scanf("%lf", &d);
    double S_ring = M_PI * R * R;
    double S_tr = sqrt(4) * a*a / 3;
    double S_kv = d * d;
    printf("S_ring: %f\n", S_ring);
    printf("S_tr: %f\n", S_tr);
    printf("S_kv: %f\n", S_kv);
    double result = S_ring > S_tr ? S_ring: S_tr;
    result = result > S_kv ? result : S_kv;
    printf("Result: %f\n", result);
    return 0;
}
