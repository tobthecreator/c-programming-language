#include <stdio.h>

/*
    So now we've changed f and c to floats.  That requires changes to our equation, but also to our print statement

    I'm still not getting it to print out 17.8, it still goes with 18

    Ah! It's because I needed to %3.1f in the print format
*/
main()
{
    float f, c;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    f = lower;

    while (f <= upper)
    {
        c = (5.0 / 9.0) * (f - 32.0);
        printf("%3.0f\t%3.1f\n", f, c); //%3 tells you to print on a 3 digit wide column
        f = f + step;
    }
}