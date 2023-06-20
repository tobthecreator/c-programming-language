#include <stdio.h>

main()
{
    int c, i, num_white, num_other;
    int num_digit[10]; // an array of 10
    for (int i = 0; i < 10; ++i)
    {
        num_digit[i] = 0;
    }

    num_white = num_other = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++num_digit[c - '0']; // this must convert it into 0-9?
        }
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++num_white;
        }
        else
        {
            ++num_other;
        }
    }
}