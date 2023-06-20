#include <stdio.h>

double square(double n);

main()
{
    int x = 4;

    double y = square(x);

    printf("%8.8f", y);
}

double square(double n)
{
    return n * n;
}