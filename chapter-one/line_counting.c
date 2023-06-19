#include <stdio.h>

main()
{
    int line_count;
    int c;

    line_count = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++line_count;
        }

        printf("%d", c);
    }

    printf("\n%d\n", line_count);
}