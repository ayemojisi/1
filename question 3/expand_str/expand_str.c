#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
    int i = 0;
    int b = 0;
    int a = 0;
    if(ac == 2)
    {
        while(av[1][b])
        b++;
        b--;
        while(av[1][b] == ' ')
        {
            b--;
            a = 1;
        }
        if(a == 0)
        b++;
        while(av[1][i] == ' ')
        i++;
        while(av[1][i] && i <= b)
        {
            if(av[1][i] == ' ')
            {
                while(av[1][i] == ' ')
                i++;
                write(1, "   ", 3);
                i--;
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }

    }
    write(1, "\n", 1);
    
}