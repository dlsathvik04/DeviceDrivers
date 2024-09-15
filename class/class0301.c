#include <stdio.h>

void LE_or_BE()
{
    int a = 10;
    char *p = (char *)&a;
    if (*p)
    {
        printf("Little Endian");
    }
    else
    {
        printf("Big Endian");
    }
}

void LE_or_BE_union()
{
    union num
    {
        int a;
        char c;
    };

    union num num10;
    num10.a = 1;
    printf("%d\n", num10.a);
    num10.c = 0;
    printf("%d\n", num10.a);
    if (num10.a)
    {
        printf("Big Endian");
    }
    else
    {
        printf("Little Endian");
    }
}

int main()
{
    LE_or_BE_union();
    return 0;
}