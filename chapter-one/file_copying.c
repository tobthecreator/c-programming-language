#include <stdio.h>

main()
{
    int c;

    c = getchar();

    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}

// the book claims "an experience C programmer would write the code like this"
// but I don't think this is particularly that readable, it hides a variable assignment in a while loop condition!
main_alt()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}
