// https://youtu.be/KJgsSFOSQv0?t=6801

#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[])
{
    printf("Hi %s!\n", name);
}

double cube(double x);

int main()
{
    sayHi("Sid");
    printf("%f", cube(2.0));

    return 0;
}

double cube(double x)
{
    double result = x * x * x;
    return result;
    printf("0\% chance this prints");
}
