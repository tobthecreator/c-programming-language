#include <stdio.h>

/*
    I'm going to try to make a habit of writing the code and inspecting it myself
    before I read on.

    Below, we're converting Celcius to farenheit.  We haven't learned how to abstract functions yet
    so we're doing the conversion in-line.

    We're starting at 0, and then we'll convert 0F to XC with the function.

    After every operation, we'll iterate F by the step variable's value until we hit the upper variable's value.

    Note: this generates a "missing defaults to int" warning
*/
main()
{
    int f, c;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    f = lower;

    while (f <= upper)
    {
        c = 5 * (f - 32) / 9;
        printf("%3d\t%3d\n", f, c); //%3 tells you to print on a 3 digit wide column
        f = f + step;
    }
}