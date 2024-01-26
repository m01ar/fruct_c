#include "myAryFunc.h"
#include <stdio.h>

int aryInputInt(int ary[], int sz)
{
    int i = 0;
    int n;
    char sep;

    while (scanf("%d%c", &n, &sep) == 2 && i < sz)
    {
        ary[i++] = n;
        if (sep == '\n')
            break;
        if (sep != ' ')
            return -1;
    }

    return i;
}

void aryPrintInt(int ary[], int sz, char *sep, char *end)
{
    for (int i = 0; i < sz; i++)
        printf("%d%s", ary[i], sep);

    printf("%s", end);
}
