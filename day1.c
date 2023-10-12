// https://youtu.be/KJgsSFOSQv0?t=1938

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "john";
    int age = 70;

    printf("There once was a man named %s\n", name);
    printf("he was %d years old.\n", age);
    age = 71;
    printf("He really liked the name %s\n", name);
    printf("but did not like being %d.\n", age);

    return 0;
}