#include <stdio.h>

main_original(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++)
    {
        char *argument = argv[i];

        // if we're at the end of argv, no space. otherwise, space
        char *space = (i < argc - 1) ? " " : "";

        printf("%s\t%s", argument, space);
    }

    printf("\n");
    return 0;
}

main(int argc, char *argv[])
{
    while (--argc > 0)
    {
        char *argument = *++argv;

        // if we're at the end of argv, no space. otherwise, space
        char *space = (argc > 1) ? " " : "";

        printf("%s\t%s", argument, space);
    }

    printf("\n");
    return 0;
}
