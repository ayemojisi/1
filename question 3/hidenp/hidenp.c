#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int b = 0;
        while(av[1][i] && av[2][b])
        {
            while(av[2][b])
            {
                if(av[2][b] == av[1][i])
                i++;
                b++;
            }
        }
        if(av[1][i] == '\0')
        {
            write(1, "1", 1);
        }
        else
            write(1, "0", 1);
    }
    write(1,"\n", 1);
}