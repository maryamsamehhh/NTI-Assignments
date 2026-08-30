//35-B) Sum and Multiplication — Loops


#include <stdio.h>

int main()
{
    int x, y;
    int sum, multiplication;
    int i;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    sum = x;

    for (i = 0; i < y; i++)
        sum++;

    multiplication = 0;

    for (i = 0; i < y; i++)
        multiplication += x;

    printf("Sum = %d\n", sum);
    printf("Multiplication = %d\n", multiplication);

    return 0;
}


///C) Sum and Multiplication — Compound Assignment


/*#include <stdio.h>

int main()
{
    int x, y;
    int sum, multiplication;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    sum = x;
    sum += y;

    multiplication = x;
    multiplication *= y;

    printf("Sum = %d\n", sum);
    printf("Multiplication = %d\n", multiplication);

    return 0;
}*/