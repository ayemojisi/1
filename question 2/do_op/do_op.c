#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int a = 0;
    int b = 0;
    int toplam = 0;
    if(ac == 4)
    {
        a = atoi(av[1]);
        b = atoi(av[3]);
        if(av[2][0] == '+')
        {
            toplam = a + b;
            printf("%d", toplam);        
        }
        else if(av[2][0] == '-')
        {
            toplam = a - b;
            printf("%d", toplam);        
        }
        else if(av[2][0] == '*')
        {
            toplam = a * b;
            printf("%d", toplam);        
        }
        else if(av[2][0] == '/')
        {
            toplam = a / b;
            printf("%d", toplam);      
        }
        else if(av[2][0] == '%')
        {
            toplam = a % b;
            printf("%d", toplam);        
        }
    }
    printf("\n");
}