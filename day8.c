// https://www.youtube.com/watch?v=KJgsSFOSQv0&t=7631s

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b, int c)
{
    int result;

    if (a >= b && a >= c)
    {
        result = a;
    }
    else if (b >= a && b >= c)
    {
        result = b;
    }
    else
    {
        result = c;
    }

    return result;
}

int main()
{
    printf("%d", max(1, 2, 1));

    if (3 > 2 || 2 > 5)
    {
        printf("hi");
    }

    if (3 != 2)
    {
        printf("math is easy");
    }

    if (3 == 2)
    {
        printf("math is hard");
    }

    return 0;
}
