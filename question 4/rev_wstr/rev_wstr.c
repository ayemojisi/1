#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
    int i = 0;
    int start;
    int end;
    if(ac == 2)
    {
        while(av[1][i])
        i++;
        while(av[1][i] == ' ' || av[1][i] == '\0')
        i--;
        end = i;
        while(av[1][i])
        {
            while(av[1][i] != ' ' && i >= 0)
            {
                i--;
            }
            if(av[1][i] == ' ' && i >= 0)
            {
                start = i + 1;
                while(start <= end)
                {
                    write(1, &av[1][start++], 1);
                }
                while(av[1][i] == ' ')
                    write(1, &av[1][i--], 1);

            }
            end = i;
        }
        i = 0;
        while(av[1][i] == ' ')
        i++;
        while(av[1][i] != ' ' && av[1][i])
        write(1, &av[1][i++], 1);
    
    }
    write(1, "\n", 1);
}