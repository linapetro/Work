//Необходимо вычислить выражения

#include <stdio.h>
int main(void)
{
    int a=5, b, c=5, d;
    printf("b=");
    scanf("%d", &b);
    printf("d=");
    scanf("%d", &d);
    printf ("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
    a=a+b-2;
    printf("a=%d\n", a);
    c=c+1;
    d=c-a+d;
    printf("c=%d, d=%d\n", c, d);
    a=a*c;
    c=c-1;
    printf("a=%d, c=%d\n", a, c);
    a=a/10;
    c=c/2;
    b=b-1;
    d=d*(c+b+a);
    printf("a=%d, c=%d, b=%d, d=%d\n", a, c, b, d);
    return 0;

}
