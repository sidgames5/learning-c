// https://youtu.be/KJgsSFOSQv0?t=8983

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.9;
    strcpy(student1.name, "Ben");
    strcpy(student1.major, "Chemistry");

    printf("%s is %d, has a GPA of %f, and is majoring in %s.\n", student1.name, student1.age, student1.gpa, student1.major);

    return 0;
}
