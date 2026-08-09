#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int x;
    int y;

    if (argc > 3)
    {
        ft_printf("My: ");
        x = ft_printf(argv[1], atoi(argv[2]), atoi(argv[3]));
        ft_printf("\nMy: %d", x);
        printf("\nOryginal: ");
        y = printf(argv[1], atoi(argv[2]), atoi(argv[3]));
        printf("\nOryginal: %d", y);
        printf("\n");
    }
    return (0);
}