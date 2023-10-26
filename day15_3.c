// https://youtu.be/KJgsSFOSQv0?t=12757

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("employees.txt", "w");
    fprintf(file, "Name, Age, Position\n");
    fprintf(file, "---------------------\n");
    fprintf(file, "John, 30, Logistics\n");
    fprintf(file, "Bob, 42, Accounting\n");
    fclose(file);

    // a new employee has just been hired
    FILE *appendfile = fopen("employees.txt", "a");
    fprintf(file, "Kelly, 26, Customer Service\n");
    fclose(appendfile);

    return 0;
}
