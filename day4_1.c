// https://youtu.be/KJgsSFOSQv0?t=4328

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    int grade;
    printf("Enter your grade in percentage: ");
    scanf("%d", &grade);
    printf("Your GPA is %f.\n", grade / 25.0);

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is %s.\n", name);

    return 0;
}
