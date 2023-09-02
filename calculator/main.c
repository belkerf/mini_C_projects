#include <stdio.h>
int main()
{
    int a, b, c, res;

    printf("enter two number : ");
    scanf("%i %i", &a, &b);
    printf("choice one of these operation :\n\t1\)+\n\t2\)-\n\t3\)/\n\t4\)x\n");
    scanf("%i", &c);
    switch (c)
    {
        case 1:
        res = a + b;
        printf("%i + %i = %i", a, b, res);
        break;
        case 2:
        res = a - b;
        printf("%i - %i = %i", a, b, res);
        break;
        case 3:
        res = a / b;
        printf("%i / %i = %i", a, b, res);
        break;
        case 4:
        res = a * b;
        printf("%i x %i = %i", a, b, res);
        break;
        default:
        printf("you enter a wrong number pleaz try again!");
    }
}