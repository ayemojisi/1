#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int b = 0;
    if(ac == 4)
    {
        while(av[2][b] && av[3][b])
        b++;
        if(b == 1)
        b = 0;
        if(b != 0)
        {
            write(1, "\n", 1);
            return(0);
        }
        while(av[1][i])
        {
            if(av[1][i] == av[2][b])
                write(1, &av[3][b], 1);
            else
                write(1, &av[1][i], 1);
            i++;

        }
    }
    write(1, "\n", 1);
}