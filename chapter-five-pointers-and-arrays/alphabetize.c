// this file came out of the box a little borked in the book I think

#include <stdio.h>
#include <string.h>

#define MAX_LINES 5000
#define MAX_LEN 1000

int readlines(char *lineptr[], int nlines);
int writelines(char *lineptr[], int nlines);
void sortlines(char *lineptr[], int left, int right);
void swap(char *v[], int i, int j);

main()
{
    // Array of pointers to each line
    char *lineptr[MAX_LINES];

    // read all lines in

    int nlines = readlines(lineptr, MAX_LINES);

    if (nlines < 0)
    {
        printf("error: input too big to sort\n");
        return 1;
    }

    sortlines(lineptr, 0, nlines - 1);
    writelines(lineptr, nlines);
    return 0;
}

int getline(char *, int);
char *alloc(int);

int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAX_LEN];

    nlines = 0;

    // count lines

    // copy next line into line array, return length
    while ((len = getline(line, MAX_LEN)) > 0)
    {
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
        {
            return -1;
        }

        line[len - 1] = '\0';
        strcpy(p, line); // copy
        lineptr[nlines] = p;
        nlines++;
    }

    return nlines;
}

int writelines(char *lineptr[], int nlines)
{

    while (nlines-- > 0)
        printf("%s\n", *lineptr++);
}

void sortlines(char *v[], int left, int right)
{
    int i, last;

    if (left >= right)
        return;

    swap(v, left, (left + right) / 2);
    last = left;

    for (i = left + 1; i <= right; i++)
    {
        if (strcmp(v[i], v[left]) < 0)
            swap(v, ++last, i);

        swap(v, left, last);
        qsort(v, left, last - 1);
        qsort(v, last + 1, right);
    }
}

void swap(char *v[], int i, int j)
{
    char *temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
