#include <stdio.h>
#include <string.h>

main()
{
    char *name[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"};

    int length = sizeof(name) / sizeof(name[0]);
    for (int i = 0; i < length; i++)
    {
        printf("\n");
        printf("%d", i);
        printf("\t");
        printf("%s", name[i]);
        printf("\t");
        printf("%c", *name[i]);
        printf("\t");
        printf("%s", &*name[i]);
    }
}