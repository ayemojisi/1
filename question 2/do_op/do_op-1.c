#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i = 0;
    int a;
    int b;
    int toplam = 0;
    if(ac == 4)
    {
        a = atoi(av[1]);
        b = atoi(av[3]);
        if(av[2][0] == '+')
            printf("%d", (a + b));
        else if(av[2][0] == '-')
            printf("%d", (a - b));
        else if(av[2][0] == '*')
            printf("%d", (a * b));
        else if(av[2][0] == '/')
            printf("%d", (a / b));
        else if(av[2][0] == '%')
            printf("%d", (a % b));
    }
    printf("\n");
}