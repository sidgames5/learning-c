// https://youtu.be/KJgsSFOSQv0?t=2723

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score = 94;
    double gpa = 3.96;
    char grade = 'A';
    char class[] = "Math";

    printf(class);
    printf("Hello\nWorld!");

    printf("\nYour score is: %d\n", score);
    printf("You have an %c (%d)", grade, score);

    return 0;
}
