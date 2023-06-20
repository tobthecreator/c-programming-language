#include <stdio.h>
#define MAX_LINE_CHAR 1000
/*
    while there is another line
        if the line is longer the the known longest line
            save the line
            save it's length

    print the longest line
*/

int get_line(char line[], int maxline);
void copy_line(char to[], char from[]);

main()
{
    int current_length;
    int max_length;

    char current_line[MAX_LINE_CHAR];
    char longest_line[MAX_LINE_CHAR];

    max_length = 0;

    while ((current_length = get_line(current_line, MAX_LINE_CHAR)) > 0)
    {
        if (current_length > max_length)
        {
            max_length = current_length;
            copy(longest_line, current_line);
        }
    }

    if (max_length > 0)
        printf("%s", longest_line);

    return 0;
}

int get_line(char s[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void copy_line(char to[], char from[])
{
    int i;
    i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}
