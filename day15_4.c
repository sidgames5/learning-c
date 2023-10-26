// https://youtu.be/KJgsSFOSQv0?t=13572

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("employees.txt", "r");
    char line[100];
    fgets(line, 100, file);
    printf("%s", line);
    fgets(line, 100, file);
    printf("%s", line);
    fgets(line, 100, file);
    printf("%s", line);
    fgets(line, 100, file);
    printf("%s", line);
    fgets(line, 100, file);
    printf("%s", line);
    fclose(file);

    return 0;
}
