#include <stdio.h>

// okay this isn't working on my machine, it won't let me end my input
// GPT -> you have to give an EOF signal
main()
{
    long nc;

    nc = 0;

    while (getchar() != EOF)
        ++nc;

    printf("%ld\n", nc);
}