// https://youtu.be/KJgsSFOSQv0?t=3613

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //  divides a number
    printf("%f", 5 / 4.0);
    int num = 6;
    // prints the number 6
    printf("\n%d", num);

    /*
    runs the following math operations:
    sqrt
    ceil
    floor
    */
    printf("\n%f", sqrt(25));
    // printf("\n%f", ceil(1.1));
    printf("\n%f", floor(1.9));
    // Its no longer gonna run ceil

    int othernum = 5;
    printf("\n%d", othernum);
    othernum = 8;
    printf("\n%d", othernum);

    // this number cant be changed
    const int otherothernum = 2;
    printf("\n%d", otherothernum);

    return 0;
}
