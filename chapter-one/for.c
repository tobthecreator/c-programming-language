#include <stdio.h>

main()
{
    int f;

    for (f = 0; f <= 300; f += 20)
    {
        printf("%3d\t%3.2f\n", f, (5.0 / 9.0) * (f - 32.0));
    }
}