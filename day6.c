// https://youtu.be/KJgsSFOSQv0?t=5804

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 8, 16, 32, 64, 128, 256};
    luckyNumbers[1] = 5;
    printf("%d", luckyNumbers[1]);

    return 0;
}
