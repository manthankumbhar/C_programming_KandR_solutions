#include <stdio.h>

int main()
{
    int fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Temperature conversion program (F -> C)\n");
    printf("fahr\tcels\n");
    while (fahr <= upper)
    {
        cels = (5 * (fahr - 31)) / 9;
        printf("%d\t%d\n", fahr, cels);
        fahr += step;
    }
}