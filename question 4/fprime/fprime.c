#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
    int a = atoi(av[1]);
    int i = 1;
    if(a == 1)
        printf("%d", a);
    while(a >= i++)
    {
        if(a % i == 0)
        {
            printf("%d", i);
             a = a / i;
        if(a >= i) 
            printf("*");
            i = 1;
        }
    }
    }
    printf("\n");
}