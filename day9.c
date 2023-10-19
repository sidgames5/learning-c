// https://youtu.be/KJgsSFOSQv0?t=8487

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter a number: ");
    scanf("%lf", &b);
    printf("Enter operator: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%f\n", a + b);
        break;
    case '-':
        printf("%f\n", a - b);
        break;
    case '*':
        printf("%f\n", a * b);
        break;
    case '/':
        printf("%f\n", a / b);
        break;

    default:
        printf("Invalid operator\n: %c", op);
        break;
    }

    return 0;
}
