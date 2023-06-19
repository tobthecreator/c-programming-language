#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

// count lines, words and characters from an input
main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        ++nc;

        if (c == '\n')
            ++nl;

        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else
        {
            state = IN;
            ++nw;
        }
    }

    printf("nc: %d\nnw: %d\nnl:%d", nc, nw, nl);
}