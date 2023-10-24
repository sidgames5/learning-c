// https://youtu.be/KJgsSFOSQv0?t=11350

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            printf("%d\n", matrix[x][y]);
        }
    }

    return 0;
}
